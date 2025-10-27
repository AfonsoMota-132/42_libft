/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:11:17 by afogonca          #+#    #+#             */
/*   Updated: 2024/10/25 11:12:35 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*ft_strdup(const char *src)
{
	char	*str;
	size_t	len;

	len = ft_strlen(src) + 1;
	str = ft_calloc(sizeof(char), len);
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, src, len);
	return (str);
}
