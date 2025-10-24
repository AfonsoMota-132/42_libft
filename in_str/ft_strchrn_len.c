/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrn_len.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 09:01:05 by afogonca          #+#    #+#             */
/*   Updated: 2025/10/24 09:02:07 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "in_str.h"

size_t	ft_strchrn_len(const char *str, char c, size_t max)
{
	size_t	i;

	i = 0;
	while (i < max && str[i] && str[i] != c)
		i++;
	return (i);
}
