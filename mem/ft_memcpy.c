/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 22:37:30 by afogonca          #+#    #+#             */
/*   Updated: 2025/10/23 22:37:31 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*cpy_dest;
	const unsigned char	*cpy_src;

	i = 0;
	if (!dest && !src)
		return (0);
	cpy_dest = (unsigned char *) dest;
	cpy_src = (unsigned char *) src;
	while (i < n)
	{
		cpy_dest[i] = cpy_src[i];
		i++;
	}
	return (dest);
}
