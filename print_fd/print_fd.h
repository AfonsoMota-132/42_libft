/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_fd.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:51:01 by afogonca          #+#    #+#             */
/*   Updated: 2025/10/27 14:52:30 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_FD_H
# define PRINT_FD_H

# ifndef LIBFT_H
#  include "../libft.h"
# endif

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
