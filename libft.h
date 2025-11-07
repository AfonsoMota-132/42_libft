/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:45:51 by afogonca          #+#    #+#             */
/*   Updated: 2025/03/07 10:31:49 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <fcntl.h>

# ifndef IS_CHAR_H
#  include "./is_char/is_char.h"
# endif
# ifndef MEM_H
#  include "./mem/mem.h"
# endif
# ifndef IN_STR_H
#  include "./in_str/in_str.h"
# endif
# ifndef STR_TO_H
#  include "./str_to/str_to.h"
# endif
# ifndef STR_UTILS_H
#  include "./str_utils/str_utils.h"
# endif
# ifndef STR_H
#  include "./str/str.h"
# endif
# ifndef PRINT_FD_H
#  include "./print_fd/print_fd.h"
# endif
# ifndef CONVERT_H
#  include "./convert/convert.h"
# endif

void	**ft_matrixcopy(void **matrix);
void	ft_matrix_free(void **matrix);

//		Lists		//
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *newnode);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *newnode);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

//		Printf		//

int		ft_printf(const char *strs, ...);
int		ft_printfstr(char *str);
int		ft_printfnbr(int nbr);
int		ft_printfunbr(unsigned int nbr);
int		ft_printfhex(unsigned int nbr, int uporlow);
int		ft_printfpointer(void *pointer);
int		ft_nbrlen(int n);

//		GNL			//
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

//		Main		//

void	*ft_calloc_gnl(size_t nbytes, size_t size);
char	*ft_read(int fd, char *buffer);
char	*get_next_line(int fd);

//		Utils		//

char	*ft_strchr_gnl(char *s, int c);
int		ft_strlen_gnl(const char *str);
char	*ft_strjoin_gnl(char *s1, char *s2);
char	*ft_getline(char *buffer);
char	*ft_bufferupdt(char *buffer);

#endif
