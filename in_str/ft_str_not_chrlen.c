/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_not_chrlen.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:04:25 by afogonca          #+#    #+#             */
/*   Updated: 2025/10/27 09:05:36 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "in_str.h"

size_t	ft_str_not_chrlen(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] == c)
		i++;
	return (i);
}
