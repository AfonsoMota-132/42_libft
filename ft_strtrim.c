/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:00:28 by afogonca          #+#    #+#             */
/*   Updated: 2024/10/23 10:33:09 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_trim(char const s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*str;

	if (s1 == NULL)
		return (NULL);
	i = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	printf("i: %lu, start: %lu, end: %lu\n", i, start, end);
	while (ft_trim(s1[start], set))
		start++;
	while (ft_trim(s1[end], set))
		end--;
	str = ft_substr(s1, start, ((end - start) + 1));
	return (str);	
}

static	size_t	ft_trim(char const s1, char const *set)
{
	size_t	i;

	i = 0;
	while(set[i] != '\0')
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}
/*
int main(int argc, char **argv)
{
	char *str;
	if (argc >= 3)
	{
		str = ft_strtrim(argv[1], argv[2]);
		printf("%s\n", str);
		free(str);
	}
	else
		printf("Not enought arguments\n");
	
}
*/
