/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 09:51:24 by afogonca          #+#    #+#             */
/*   Updated: 2025/03/02 09:52:40 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strchr_len(char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] != 'c')
		i++;
	if (i == ft_strlen(str))
		return (-1);
	return (i);
}
