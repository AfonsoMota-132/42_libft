/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchrn_len.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 09:07:51 by afogonca          #+#    #+#             */
/*   Updated: 2025/10/24 09:21:44 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "in_str.h"

size_t	ft_strrchrn_len(const char *str, char c, size_t max)
{
	size_t	i;

	if (!str)
		return (-1);
	i = ft_strlen(str);
	if (!i || !max)
		return (-1);
	if (max >= i)
		max = 0;
	else
		max = i- max;
	i--;
	while (i >= max)
	{
		if (str[i] == c)
			return (i);
		if (i == 0)
			break ;
		i--;
	}
	return (-1);
}
