/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:02:30 by afogonca          #+#    #+#             */
/*   Updated: 2025/10/27 15:04:46 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

# ifndef LIBFT_H
#  include "../libft.h"
# endif

int		ft_atoi(const char *nptr);
long	ft_atol(const char *str);
char	*ft_itoa(int n);

#endif
