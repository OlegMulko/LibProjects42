# My_C_Libraries

## Description

During the execution of the projects in school 42(school 21 Moscow) I had to supplement the libraries with various functions, so I managed to put together a good collection. Not all functions inside this library are written perfectly, but I tried to make them sufficient to perform specific tasks. My libraries for projects in school 42 in language C:
* libft
* libdir
* libfifo
* libdar
* libhash
* libstack
* libstr

## Libft

### Functions in man.

I re-coded a set of the libc functions, as defined in their man. My functions names prefixed by “ft_”. For instance strlen becomes
ft_strlen.

1. ft_memset
2. ft_bzero
3. ft_memcpy
4. ft_memccpy
5. ft_memmove
6. ft_memchr
7. ft_memcmp
8. ft_strlen
9. ft_strdup
10. ft_strcpy
11. ft_strncpy
12. ft_strcat
13. ft_strncat
14. ft_strlcat
15. ft_strchr
16. ft_strrchr
17. ft_strstr
18. ft_strnstr
19. ft_strcmp
20. ft_strncmp
21. ft_atoi
22. ft_isalpha
23. ft_isdigit
24. ft_isalnum
25. ft_isascii
26. ft_isprint
27. ft_toupper
28. ft_tolower

### Other functions

29. __Prototype__: `void * ft_memalloc(size_t size);`. __Description__: Allocates (with malloc(3)) and returns a “fresh” memory
area. The memory allocated is initialized to 0. If the allocation fails, the function returns NULL. __Param. #1__: The size of the memory that needs to be allocated. __Return value__: The allocated memory area.

30. __Prototype__: `void ft_memdel(void **ap);`. __Description__: Takes as a parameter the address of a memory area that needs
to be freed with free(3), then puts the pointer to NULL. __Param. #1__: A pointer’s address that needs its memory freed and set to
NULL. __Return value__: None.

31. __Prototype__: `char * ft_strnew(size_t size);`. __Description__: Allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’. Each character of the string is initialized at
’\0’. If the allocation fails the function returns NULL. __Param. #1__: The size of the string to be allocated. __Return value__: The string allocated and initialized to 0.

32. __Prototype__: `void ft_strdel(char **as);`. __Description__: Takes as a parameter the address of a string that need to be
freed with free(3), then sets its pointer to NULL. __Param. #1__: The string’s address that needs to be freed and its pointer set
to NULL. __Return value__: None.

33. __Prototype__: `void ft_strclr(char *s);`. __Description__: Sets every character of the string to the value ’\0’. __Param. #1__: The string that needs to be cleared. __Return value__: None.

34. __Prototype__: `void ft_striter(char *s, void (*f)(char *));`. __Description__: Applies the function f to each character of the string passed
as argument. Each character is passed by address to f to be
modified if necessary. __Param. #1__: The string to iterate. __Param. #2__: The function to apply to each character of s. __Return value__: None.

35. __Prototype__: `void ft_striteri(char *s, void (*f)(unsigned int,char *));`. __Description__: Applies the function f to each character of the string passed
as argument, and passing its index as first argument. Each
character is passed by address to f to be modified if necessary. __Param. #1__: The string to iterate. __Param. #2__: The function to apply to each character of s and its index. __Return value__: None.

36. __Prototype__: `char *ft_strmap(char const *s, char (*f)(char));`. __Description__: Applies the function f to each character of the string given
as argument to create a “fresh” new string (with malloc(3))
resulting from the successive applications of f. __Param. #1__: The string to map. __Param. #2__: The function to apply to each character of s. __Return value__: The “fresh” string created from the successive applications of
f.

37. __Prototype__: `char * ft_strmapi(char const *s, char (*f)(unsigned int, char));`. __Description__: Applies the function f to each character of the string passed
as argument by giving its index as first argument to create a
“fresh” new string (with malloc(3)) resulting from the successive applications of f. __Param. #1__: The string to map. __Param. #2__: The function to apply to each character of s and its index. __Return value__: The “fresh” string created from the successive applications of
f.

38. __Prototype__: `int ft_strequ(char const *s1, char const *s2);`. __Description__: Lexicographical comparison between s1 and s2. If the 2
strings are identical the function returns 1, or 0 otherwise. __Param. #1__: The first string to be compared. __Param. #2__: The second string to be compared. __Return value__: 1 or 0 according to if the 2 strings are identical or not.

39. __Prototype__: `int ft_strnequ(char const *s1, char const *s2, size_t n);`. __Description__: Lexicographical comparison between s1 and s2 up to n characters or until a ’\0’ is reached. If the 2 strings are identical,
the function returns 1, or 0 otherwise. __Param. #1__: The first string to be compared. __Param. #2__: The second string to be compared. __Param. #3__: The maximum number of characters to be compared. __Return value__: 1 or 0 according to if the 2 strings are identical or not.

40. __Prototype__: `char * ft_strsub(char const *s, unsigned int start, size_t len);`. __Description__: Allocates (with malloc(3)) and returns a “fresh” substring
from the string given as argument. The substring begins at
indexstart and is of size len. If start and len aren’t refering to a valid substring, the behavior is undefined. If the
allocation fails, the function returns NULL. __Param. #1__: The string from which create the substring. __Param. #2__: The start index of the substring. __Param. #3__: The size of the substring. __Return value__: The substring.

41. __Prototype__: `char * ft_strjoin(char const *s1, char const *s2);`. __Description__: Allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’, result of the concatenation of s1 and s2. If
the allocation fails the function returns NULL. __Param. #1__: The prefix string. __Param. #2__: The suffix string. __Return value__: The “fresh” string result of the concatenation of the 2 strings.

42. __Prototype__: `char * ft_strtrim(char const *s);`. __Description__: Allocates (with malloc(3)) and returns a copy of the string
given as argument without whitespaces at the beginning or at
the end of the string. Will be considered as whitespaces the
following characters ’ ’, ’\n’ and ’\t’. If s has no whitespaces at the beginning or at the end, the function returns a
copy of s. If the allocation fails the function returns NULL. __Param. #1__: The string to be trimed. __Return value__: The “fresh” trimmed string or a copy of s.

43. __Prototype__: `char ** ft_strsplit(char const *s, char c);`. __Description__: Allocates (with malloc(3)) and returns an array of “fresh”
strings (all ending with ’\0’, including the array itself) obtained by spliting s using the character c as a delimiter.
If the allocation fails the function returns NULL. Example
: ft_strsplit("/hello/fellow///students/", ’/’) returns the array ["hello", "fellow", "students"]. __Param. #1__: The string to split. __Param. #2__: The delimiter character. __Return value__: The array of “fresh” strings result of the split.

44. __Prototype__: `char * ft_itoa(int n);`. __Description__: Allocate (with malloc(3)) and returns a “fresh” string ending with ’\0’ representing the integer n given as argument.
Negative numbers must be supported. If the allocation fails,
the function returns NULL. __Param. #1__: The integer to be transformed into a string. __Return value__: The string representing the integer passed as argument.

45. __Prototype__: `void ft_putchar(char c);`. __Description__: Outputs the character c to the standard output. __Param. #1__: The character to output. __Return value__: None.

46. __Prototype__: `void ft_putstr(char const *s);`. __Description__: Outputs the string s to the standard output. __Param. #1__: The string to output. __Return value__: None.

47. __Prototype__: `void ft_putendl(char const *s);`. __Description__: Outputs the string s to the standard output followed by a ’\n’. __Param. #1__: The string to output. __Return value__: None.

48. __Prototype__: `void ft_putnbr(int n);`. __Description__: Outputs the integer n to the standard output. __Param. #1__: The integer to output. __Return value__: None.

49. __Prototype__: `void ft_putchar_fd(char c, int fd);`. __Description__: Outputs the char c to the file descriptor fd. __Param. #1__: The character to output. __Param. #2__: The file descriptor. __Return value__: None.

50. __Prototype__: `void ft_putstr_fd(char const *s, int fd);`. __Description__: Outputs the string s to the file descriptor fd. __Param. #1__: The string to output. __Param. #2__: The file descriptor. __Return value__: None.

51. __Prototype__: `void ft_putendl_fd(char const *s, int fd);`. __Description__: Outputs the string s to the file descriptor fd followed by a ’\n’. __Param. #1__: The string to output. __Param. #2__: The file descriptor. __Return value__: None.

52. __Prototype__: `void ft_putnbr_fd(int n, int fd);`. __Description__: Outputs the integer n to the file descriptor fd. __Param. #1__: The integer to print. __Param. #2__: The file descriptor. __Return value__: None.

### Here is a description of the fields of the t_list struct:
* content : The data contained in the link. The void * allows to store any kind of
data.
* content_size : The size of the data stored. The void * type doesn’t allow you to
know the size of the pointed data, as a consequence, it is necessary to save its size.
For instance, the size of the string "42" is 3 bytes and the 32bits integer 42 has a
size of 4 bytes.
* next : The next link’s address or NULL if it’s the last link.

### The following functions will allow you to manipulate your lists more easilly

53. __Prototype__: `t_list * ft_lstnew(void const *content, size_t content_size);`. __Description__: Allocates (with malloc(3)) and returns a “fresh” link. The
variables content and content_size of the new link are initialized by copy of the parameters of the function. If the parameter content is nul, the variable content is initialized to
NULL and the variable content_size is initialized to 0 even
if the parameter content_size isn’t. The variable next is
initialized to NULL. If the allocation fails, the function returns
NULL. __Param. #1__: The content to put in the new link. __Param. #2__: The size of the content of the new link. __Return value__: The new link.

54. __Prototype__: `void ft_lstdelone(t_list **alst, void (*del)(void *, size_t));`. __Description__: Takes as a parameter a link’s pointer address and frees the
memory of the link’s content using the function del given as
a parameter, then frees the link’s memory using free(3). The
memory of next must not be freed under any circumstance.
Finally, the pointer to the link that was just freed must be
set to NULL (quite similar to the function ft_memdel in the
mandatory part). __Param. #1__: The adress of a pointer to a link that needs to be freed. __Return value__: None.

55. __Prototype__: `void ft_lstdel(t_list **alst, void (*del)(void *, size_t));`. __Description__: Takes as a parameter the adress of a pointer to a link and
frees the memory of this link and every successors of that link
using the functions del and free(3). Finally the pointer to
the link that was just freed must be set to NULL (quite similar
to the function ft_memdel from the mandatory part). __Param. #1__: The address of a pointer to the first link of a list that needs
to be freed. __Return value__: None.

56. __Prototype__: `void ft_lstadd(t_list **alst, t_list *new);`. __Description__: Adds the element new at the beginning of the list. __Param. #1__: The address of a pointer to the first link of a list. __Param. #2__: The link to add at the beginning of the list. __Return value__: None.

57. __Prototype__: `void ft_lstiter(t_list *lst, void (*f)(t_list *elem));`. __Description__: Iterates the list lst and applies the function f to each link. __Param. #1__: A pointer to the first link of a list. __Param. #2__: The address of a function to apply to each link of a list. __Return value__: None.

58. __Prototype__: `t_list * ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem));`. __Description__: Iterates a list lst and applies the function f to each link to
create a “fresh” list (using malloc(3)) resulting from the successive applications of f. If the allocation fails, the function
returns NULL. __Param. #1__: A pointer’s to the first link of a list. __Param. #2__: TThe address of a function to apply to each link of a list. __Return value__: The new list.

59. __Prototype__: `int ft_isspace(int c)`. __Description__: Checks if a character is whitespace. __Param. #1__: Character to check. __Return value__: 1 if character is space, otherwise 0.

60. __Prototype__: `int ft_max(int a, int b)`. __Description__: Finding langer of the numbers. __Param. #1__: First number. __Param. #2__: Second number. __Return value__: The larger of the numbers.

61. __Prototype__: `int ft_min(int a, int b)`. __Description__: Finding smaller of the numbers. __Param. #1__: First number. __Param. #2__: Second number. __Return value__: The smaller of the numbers.

62. __Prototype__: `void *ft_realloc(void *buf, size_t old, size_t new_size)`. __Description__: Changes the size of the memory block pointed to buf, the size of old, to the size equal to new_size bytes. The contents will be unchanged within the smallest of the old and new sizes, and the new distributed memory will be uninitialized. If buf is NULL, then this call is equivalent to malloc (size). __Param. #1__: Pointer to old area. __Param. #2__: Size of area __Param. #3__: Size of new area. __Return value__: Pointer to the new area.

63. __Prototype__: `void ft_swap(int *start, int *end)`. __Description__: Swaps two numbers. __Param. #1__: First number. __Param. #2__: Second number. __Return value__: None.

64. __Prototype__: `int get_next_line(const int fd, char **line)`. __Description__: Function that returns a line read from a file descriptor. __Param. #1__: The file descriptor that will be used to read. __Param. #2__: The address of a pointer to a character that will be used
to save the line read from the file descriptor. Return its result without ’\n’. __Return value__: The return value can be 1, 0 or -1 depending on whether a line has been read,
when the reading has been completed, or if an error has happened respectively.
