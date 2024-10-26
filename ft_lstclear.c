
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*idk;

	idk = *lst;
	while (idk)
	{
		temp = idk -> next;
		(*del)(idk -> content);
		free(idk);
		idk = temp;
	}
	*lst = NULL;
}
