/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_char.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 21:09:47 by afogonca          #+#    #+#             */
/*   Updated: 2025/10/23 21:09:50 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IS_CHAR_H
# define IS_CHAR_H

# ifndef LIBFT_H
#  include "../libft.h"
# endif

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_islower(int c);
int		ft_isupper(int c);

#endif
