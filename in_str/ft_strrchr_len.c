/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_len.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 22:56:08 by afogonca          #+#    #+#             */
/*   Updated: 2025/10/23 22:57:04 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "in_str.h"

size_t	ft_strrchr_len(const char *str, char c)
{
	size_t	i;

	i = ft_strlen(str) - 1;
	while (str[i] && str[i] != c)
		i--;
	return (i);
}
