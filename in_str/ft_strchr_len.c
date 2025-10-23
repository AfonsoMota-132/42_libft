/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 09:51:24 by afogonca          #+#    #+#             */
/*   Updated: 2025/10/23 22:55:04 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "in_str.h"

size_t	ft_strchr_len(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}
