/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:02:24 by afogonca          #+#    #+#             */
/*   Updated: 2025/10/27 15:03:51 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.h"

int	ft_atoi(const char *nptr)
{
	int	num;
	int	i;
	int	mult;

	mult = 1;
	i = 0;
	num = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			mult *= -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		num = (10 * num) + (nptr[i] - '0');
		i++;
	}
	return (num * mult);
}
