/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olegmulko <olegmulko@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 22:02:53 by olegmulko         #+#    #+#             */
/*   Updated: 2019/07/14 22:54:09 by olegmulko        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstack.h"

static t_stack	*get_stacklist(const size_t id, t_list **list);

void			*stack(size_t stack_id, char *method, void *data)
{
	static t_list	*stack;
	t_list			*sel_list;

	sel_list = get_stacklist(id, &stack);
	if (ft_strcmp(method, "add") == 0)
		sel_list = ft_add_stack((t_stack *)sel_list->content, data);
	else if (ft_strcmp(method, "get") == 0)
		return (ft_get_stack((t_stack **)&sel_list->content));
	else if (ft_strcmp(method, "clear") == 0)
		ft_clear_stack((t_stack **)&sel_list->content);
	return (NULL);
}

static t_stack	*get_stacklist(const size_t id, t_list **list)
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
	if (!(plist->content = ft_strnew(0)))
	{
		free(plist);
		return (NULL);
	}
	plist->content_size = id;
	ft_lstadd(list, plist);
	return (plist);
}
