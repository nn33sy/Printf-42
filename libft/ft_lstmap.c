#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list *new;
	
	if (lst == NULL || f == NULL)
		return(NULL);
	new = ft_lstnew(f(lst->content));
	new->next = ft_lstmap(lst->next,f,del);
	return (new);	
	
}
