/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_toupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 08:38:48 by afogonca          #+#    #+#             */
/*   Updated: 2025/10/27 08:39:05 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_to.h"

void	ft_str_toupper(char *str)
{
	size_t	i;

	if (!str)
		return ;
	i = 0;
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
}
