/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 22:37:42 by afogonca          #+#    #+#             */
/*   Updated: 2025/10/23 22:37:43 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*sdest;
	unsigned char	*ssrc;
	size_t			i;

	i = 0;
	sdest = (unsigned char *) dest;
	ssrc = (unsigned char *) src;
	if (sdest > ssrc)
		while (i++ < n)
			sdest[n - i] = ssrc[n - i];
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
