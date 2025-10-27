/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:00:27 by afogonca          #+#    #+#             */
/*   Updated: 2025/10/27 09:00:39 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

static int		ft_segcount(char const *s, char sep);

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	segs;
	size_t	i;
	size_t	seg;

	i = 0;
	seg = 0;
	if (!s)
		return (NULL);
	segs = ft_segcount(s, c);
	strs = ft_calloc((segs + 1), sizeof(char *));
	if (!strs)
		return (NULL);
	while (seg < segs)
	{
		i += ft_str_not_chrlen(&s[i], c);
		strs[seg] = ft_calloc(sizeof(char), ft_strchr_len(&s[i], c) + 1);
		if (!strs[seg])
			return (ft_free_split(strs, seg));
		ft_memcpy(strs[seg], &s[i], ft_strchr_len(&s[i], c));
		i += ft_strchr_len(&s[i], c);
		++seg;
	}
	return (strs);
}

static int	ft_segcount(char const *s, char sep)
{
	size_t	segs;
	size_t	i;

	i = 0;
	segs = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		i += ft_str_not_chrlen(&s[i], sep);
		if (!s[i])
			break ;
		segs++;
		i++;
		i += ft_strchr_len(&s[i], sep);
	}
	return (segs);
}

char	**ft_free_split(char **strs, size_t seg)
{
	size_t	i;

	i = 0;
	while (i < seg)
	{
		free(strs[i]);
		++i;
	}
	free(strs);
	return (0);
}
