/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olegmulko <olegmulko@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 22:02:53 by olegmulko         #+#    #+#             */
/*   Updated: 2019/07/16 13:47:32 by olegmulko        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstack.h"

static t_list	*ft_get_stacklist(const size_t id, t_list **list);
static void		ft_del_list(t_list **list, size_t id);

void			*ft_stack(size_t stack_id, char *method, void *data)
{
	static t_list	*stack_list;
	t_list			*sel_list;
	void			*res;

	sel_list = ft_get_stacklist(stack_id, &stack_list);
	if (ft_strcmp(method, "add") == 0)
		sel_list->content = (void *)ft_add_stack((t_stack *)sel_list->content, data);
	else if (ft_strcmp(method, "get") == 0)
	{
		res = ft_get_stack((t_stack **)&sel_list->content);
		if (!res)
			ft_del_list(&stack_list, stack_id);
		return (res);
	}
	else if (ft_strcmp(method, "clear") == 0)
	{
		ft_clear_stack((t_stack **)&sel_list->content);
		ft_del_list(&stack_list, stack_id);
	}
	else if (ft_strcmp(method, "size") == 0)
		return ((void *)(((t_stack *)(sel_list->content))->stack_size));
	return (NULL);
}

static t_list	*ft_get_stacklist(const size_t id, t_list **list)
{
	t_list				*plist;

	plist =	*list;
	while (plist)
	{
		if (plist->content_size == id)
			return (plist);
		plist = plist->next;
	}
	if (!(plist = ft_lstnew(NULL, 0)))
		return (NULL);
	plist->content = NULL;
	plist->content_size = id;
	ft_lstadd(list, plist);
	return (plist);
}

static void		ft_del_list(t_list **list, size_t id)
{
	t_list	*perent_list;
	t_list	*plist;
	t_list	*del_list;

	perent_list = NULL;
	if (!list || !*list)
		return ;
	plist = *list;
	while (plist)
	{
		if (plist->content_size == id)
		{
			*list = plist->next;
			free(plist);
			return ;
		}
		if ((plist->next)->content_size == id)
		{
			perent_list = plist;
			del_list = plist->next;
			perent_list->next = del_list->next;
			free(del_list);
			return ;
		}
		plist = plist->next;
	}
}
