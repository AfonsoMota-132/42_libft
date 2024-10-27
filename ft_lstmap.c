/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 09:11:24 by afogonca          #+#    #+#             */
/*   Updated: 2024/10/27 09:27:15 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_lst;

	while (lst)
	{
		if (ft_lstnew((*f)(lst -> content)))
		{
			ft_lstclear(&(lst), del);
			return (NULL);
		}
		ft_lstadd_back(&(n_lst), ft_lstnew((*f)(lst -> content)));
		lst = lst -> next;
	}
	return (n_lst);
}
