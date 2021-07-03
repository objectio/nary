#include "libft.h"

t_list* ft_lstnew(void* content)
{
	t_list* x;

	x = malloc(sizeof(t_list));
	if (!(x))
		return (NULL);
	x->content = content;
	x->next = NULL;
	return (x);
}