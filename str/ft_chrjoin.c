/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chrjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 08:58:49 by afogonca          #+#    #+#             */
/*   Updated: 2025/10/27 08:58:57 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*ft_chrjoin(char const *str, char const chr)
{
	size_t	size;
	size_t	i;
	char	*dstr;

	i = 0;
	if (!str && !chr)
		return (NULL);
	size = ft_strlen(str) + 1;
	dstr = (char *) ft_calloc(sizeof(char), (size + 1));
	if (str == NULL)
		return (NULL);
	ft_memcpy(dstr, str, size);
	dstr[i++] = chr;
	dstr[i] = '\0';
	return (dstr);
}
