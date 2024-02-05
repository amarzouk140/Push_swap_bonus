/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:09:13 by amarzouk          #+#    #+#             */
/*   Updated: 2024/02/05 18:08:07 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	free_checker(t_stack_node **a, t_stack_node **b, char **line)
{
	free_stack(a);
	if (*b)
		free_stack(b);
	free(*line);
	ft_printf("Error\n");
	exit(1);
}

int	do_commands(char *line, t_stack_node **stack_a, t_stack_node **stack_b)
{
	if (!(ft_strncmp(line, "sa", 2)))
		return (swap(stack_a), 0);
	else if (!(ft_strncmp(line, "sb", 2)))
		return (swap(stack_b), 0);
	else if (!(ft_strncmp(line, "ss", 2)))
		return (ss(stack_a, stack_b, 1), 0);
	else if (!(ft_strncmp(line, "pa", 2)))
		return (push(stack_a, stack_b), 0);
	else if (!(ft_strncmp(line, "pb", 2)))
		return (push(stack_b, stack_a), 0);
	else if (!(ft_strncmp(line, "ra", 2)))
		return (rotate(stack_a), 0);
	else if (!(ft_strncmp(line, "rb", 2)))
		return (rotate(stack_b), 0);
	else if (!(ft_strncmp(line, "rr", 2)))
		return (rr(stack_a, stack_b, 1), 0);
	else if (!(ft_strncmp(line, "rra", 3)))
		return (rev_rotate(stack_a), 0);
	else if (!(ft_strncmp(line, "rrb", 3)))
		return (rev_rotate(stack_b), 0);
	else if (!(ft_strncmp(line, "rrr", 3)))
		return (rrr(stack_a, stack_b, 1), 0);
	else
		free_checker(stack_a, stack_b, &line);
	return (1);
}

void	print_checker_res(t_stack_node **stack_a, t_stack_node **stack_b)
{
	if (stack_sorted(*stack_a))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	if (*stack_a)
		free_stack(stack_a);
	if (*stack_b)
		free_stack(stack_b);
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
		if (do_commands(line, &a, &b))
			free_checker(&a, &b, &line);
		free(line);
		line = get_next_line(0);
	}
	print_checker_res(&a, &b);
	return (0);
}
