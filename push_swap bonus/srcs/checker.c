/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:09:13 by amarzouk          #+#    #+#             */
/*   Updated: 2024/08/20 14:59:49 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	free_checker(t_stack_node **a, t_stack_node **b, char **line)
{
	free_stack(a);
	if (*b)
		free_stack(b);
	free(*line);
	write(2,"Error\n",6);
	exit(1);
}

int	do_commands(char *line, t_stack_node **stack_a, t_stack_node **stack_b)
{
	if (!(ft_strcmp(line, "sa\n")))
		return (sa(stack_a, 1), 0);
	if (!(ft_strcmp(line, "sb\n")))
		return (sb(stack_b, 1), 0);
	if (!(ft_strcmp(line, "ss\n")))
		return (ss(stack_a, stack_b, 1), 0);
	if (!(ft_strcmp(line, "pa\n")))
		return (pa(stack_a, stack_b, 1), 0);
	if (!(ft_strcmp(line, "pb\n")))
		return (pb(stack_b, stack_a, 1), 0);
	if (!(ft_strcmp(line, "ra\n")))
		return (ra(stack_a, 1), 0);
	if (!(ft_strcmp(line, "rb\n")))
		return (rb(stack_b, 1), 0);
	if (!(ft_strcmp(line, "rr\n")))
		return (rr(stack_a, stack_b, 1), 0);
	if (!(ft_strcmp(line, "rra\n")))
		return (rra(stack_a, 1), 0);
	if (!(ft_strcmp(line, "rrb\n")))
		return (rrb(stack_b, 1), 0);
	if (!(ft_strcmp(line, "rrr\n")))
		return (rrr(stack_a, stack_b, 1), 0);
	return (free_checker(stack_a, stack_b, &line), 1);
}

void	print_checker_res(t_stack_node **stack_a, t_stack_node **stack_b,
		char **line)
{
	if (stack_sorted(*stack_a))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	if (*stack_a)
		free_stack(stack_a);
	if (*stack_b)
		free_stack(stack_b);
	if (*line)
		free(*line);
}

int	main(int ac, char **av)
{
	t_stack_node	*a;
	t_stack_node	*b;
	char			*line;

	a = NULL;
	b = NULL;
	line = NULL;
	if (ac <= 1)
		return (0);
	ft_check(av);
	av = ft_join_args(av);
	init_stack_a(&a, av);
	free_split(av);
	line = get_next_line(0);
	while (line)
	{
		do_commands(line, &a, &b);
		free(line);
		line = get_next_line(0);
	}
	print_checker_res(&a, &b, &line);
}
