/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_tolower.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 08:37:21 by afogonca          #+#    #+#             */
/*   Updated: 2025/10/27 08:38:43 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_to.h"

void	ft_str_tolower(char *str)
{
	size_t	i;

	if (!str)
		return ;
	i = 0;
	while (str[i])
	{
		str[i] = ft_tolower(str[i]);
		i++;
	}
}
