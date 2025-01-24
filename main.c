/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:43:34 by afogonca          #+#    #+#             */
/*   Updated: 2025/01/15 19:45:51 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int main(void)
{
	char	**old;
	char	**cpy;

	old = ft_calloc(sizeof(char *), 4);
	old[0] = ft_strdup("Hello, World!");
	old[1] = ft_strdup("12345678");
	old[2] = ft_strdup("IS IT WORKING??");
	old[3] = NULL;
	cpy = (char **) ft_matrixcopy((void **)old);
	for (int i = 0; old[i]; i++)
		printf("old %s\n", old[i]);
	for (int i = 0; cpy[i]; i++)
		printf("cpy %s\n", cpy[i]);
}
