/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 08:32:37 by afogonca          #+#    #+#             */
/*   Updated: 2025/10/27 08:33:11 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_TO_H
# define STR_TO_H

# ifndef LIBFT_H
#  include "../libft.h"
# endif

int		ft_tolower(int c);
int		ft_toupper(int c);
void	ft_str_toupper(char *str);
void	ft_str_tolower(char *str);

#endif
