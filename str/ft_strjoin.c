/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:37:01 by afogonca          #+#    #+#             */
/*   Updated: 2025/10/27 14:41:39 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	size_t	i;
	char	*str;

	i = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	str = (char *) ft_calloc(sizeof(char), (size + 1));
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s1, ft_strlen(s1));
	ft_memcpy(&str[ft_strlen(s1)], s2, ft_strlen(s2));
	return (str);
}

// int main(int argc, char **argv)
// {
// 	if (argc >= 3)
// 		printf("%s.\n", ft_strjoin(argv[1],argv[2]));
// 	else
// 		printf("Not enough arguments\n");
// }
