/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_str.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 22:48:53 by afogonca          #+#    #+#             */
/*   Updated: 2025/10/23 22:52:37 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IN_STR_H
# define IN_STR_H

# ifndef LIBFT_H
#  include "../libft.h"
# endif

char	*ft_strchr(const char *s, int c);
size_t	ft_strchr_len(const char *s, char c);
size_t	ft_strrchrn_len(const char *str, char c, size_t max);

char	*ft_strrchr(const char *s, int c);
size_t	ft_strrchr_len(const char *s, char c);
size_t	ft_strchrn_len(const char *str, char c, size_t max);	

char	*ft_strnstr(const char *big, const char *little, size_t len);

#endif
