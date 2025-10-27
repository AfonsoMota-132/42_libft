/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:43:38 by afogonca          #+#    #+#             */
/*   Updated: 2025/10/27 14:43:41 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1) - 1;
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		++start;
	while (s1[start] && ft_strchr(set, s1[end]))
		--end;
	return (ft_substr(s1, start, (end - start + 1)));
}
/*
int main(int argc, char **argv)
{
	char *str;
	if (argc >= 3)
	{
		str = ft_strtrim(argv[1], argv[2]);
		printf("%s\ndone", str);
		free(str);
	}
	else
		printf("Not enought arguments\n");	
}*/
