/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:27:51 by afogonca          #+#    #+#             */
/*   Updated: 2025/10/23 22:55:26 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "in_str.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	llen;
	char	*sbig;
	char	*slittle;

	if (!big || !little)
		return (NULL);
	i = 0;
	llen = ft_strlen(little);
	sbig = (char *) big;
	slittle = (char *) little;
	if (!llen)
		return (sbig);
	while (i < len && sbig[i])
	{
		i += ft_strchrn_len(&sbig[i], slittle[0], len);
		if (!sbig[i] || i >= len || llen > len - i)
			break ;
		if (sbig[i] == slittle[0])
			if (!ft_strncmp(&sbig[i], slittle, ft_strlen(slittle)))
				return (sbig + i);
		i++;
	}
	return (NULL);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%s\n", ft_strnstr(av[1], av[2], ft_strlen(av[1])));
	}
}
