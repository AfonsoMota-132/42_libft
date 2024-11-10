/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:53:24 by afogonca          #+#    #+#             */
/*   Updated: 2024/10/31 12:09:11 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_calloc(size_t nbytes, size_t size)
{
	size_t			i;
	unsigned char	*str;

	str = malloc(nbytes * size);
	if (!str)
		return (0);
	i = 0;
	while (i < (nbytes * size))
		str[i++] = '\0';
	return (str);
}

char	*ft_bufferupdt(char *buffer)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	temp = ft_calloc((ft_strlen(buffer) - i + 1), sizeof(char));
	if (!temp)
		return (NULL);
	j = 0;
	while (buffer[i++])
		temp[j++] = buffer[i];
	temp[j] = '\0';
	free (buffer);
	return (temp);
}
