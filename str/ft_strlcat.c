/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:42:33 by afogonca          #+#    #+#             */
/*   Updated: 2025/10/27 14:42:34 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;
	size_t	sum;

	i = 0;
	sum = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (size > dlen)
		sum = dlen + slen;
	else
		sum = slen + size;
	while (src[i] && size > (dlen + 1))
	{
		dest[dlen] = src[i];
		i++;
		dlen++;
	}
	dest[dlen] = '\0';
	return (sum);
}
