/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:43:52 by afogonca          #+#    #+#             */
/*   Updated: 2025/10/27 14:44:05 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

static size_t	ft_totlen(size_t str_len, size_t start, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	str_len;
	char	*sub_str;

	str_len = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (start > str_len)
	{
		start = 0;
		len = 0;
	}
	sub_str = (char *) ft_calloc(sizeof(char),
			(ft_totlen(str_len, start, len)));
	if (sub_str == NULL)
		return (NULL);
	i = 0;
	while (s[start + i] != '\0' && i < len)
	{
		sub_str[i] = s[start + i];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}

static size_t	ft_totlen(size_t str_len, size_t start, size_t len)
{
	size_t	total;

	if (start + len > str_len)
		total = str_len - start;
	else if (str_len < len)
		total = str_len;
	else
		total = len;
	return (total + 1);
}

/*
int main(void)
{
	char	*sub_str;
	char	*str = "abcdef";
	size_t 	start = 5;
	size_t	len = 10;
	sub_str = ft_substr(str, start, len);
	printf("str: %s \nstart: %lu \nlen: %lu \n", str, start, len);
	printf("%s\n", sub_str);
	free(sub_str);
}*/
