/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:09:49 by amarzouk          #+#    #+#             */
/*   Updated: 2024/01/11 10:26:03 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

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
