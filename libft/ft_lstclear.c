#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
//printf("ok");

	if (*lst != NULL)
	{
		if ((*lst)->next != NULL)
			ft_lstclear((&(*lst)->next),del);
		del((*lst)->content);
		free(*lst);
		*lst = NULL;
	}
}
/*
void			lstdelone_f(void *d) {
	free(d);
}
int main()
{
t_list *l = ft_lstnew(strdup("nyancat"));

        l->next = ft_lstnew(strdup("#TEST#"));
        ft_lstclear(&l, lstdelone_f);
	
}*/
