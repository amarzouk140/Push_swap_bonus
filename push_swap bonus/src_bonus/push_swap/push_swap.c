/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 00:07:55 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/02/05 12:42:02 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ft_check(char **av)
{
	int	j;
	int	y;

	j = 1;
	y = 0;
	while (av[j])
	{
		y = 0;
		while (av[j][y])
		{
			if (av[j][y] != 32 && av[j][y] != '\t')
				break ;
			y++;
		}
		if (!av[j][y])
		{
			printf("Error\n");
			exit(1);
		}
		j++;
	}
}

void	free_split(char **av)
{
	int	i;

	i = 0;
	if (!av || !*av)
		return ;
	while (av[i])
		free(av[i++]);
	free(av);
}
