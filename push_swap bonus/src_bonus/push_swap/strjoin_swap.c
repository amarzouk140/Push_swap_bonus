/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:09:49 by amarzouk          #+#    #+#             */
/*   Updated: 2024/02/05 12:42:18 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

char	**ft_join_args(char **av)
{
	char	*tmp;
	char	*str;
	char	**matrix;
	int		i;

	i = 1;
	tmp = ft_strjoin(av[i++], " ");
	while (av[i])
	{
		str = ft_strjoin(tmp, av[i]);
		free(tmp);
		tmp = ft_strjoin(str, " ");
		free(str);
		i++;
	}
	matrix = ft_split(tmp, ' ');
	free(tmp);
	return (matrix);
}
