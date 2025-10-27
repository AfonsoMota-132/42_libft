/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 08:45:42 by afogonca          #+#    #+#             */
/*   Updated: 2025/10/27 08:46:08 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_utils.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0 || !s1 || !s2)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && (i < n - 1))
		i++;
	return ((unsigned char )s1[i] - (unsigned char) s2[i]);
}
