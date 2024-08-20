/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 00:04:29 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/08/20 14:58:16 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	swap(t_stack_node **head)
{
	if (!*head || !(*head)->next)
		return ;
	*head = (*head)->next;
	(*head)->prev->prev = *head;
	(*head)->prev->next = (*head)->next;
	if ((*head)->next)
		(*head)->next->prev = (*head)->prev;
	(*head)->next = (*head)->prev;
	(*head)->prev = NULL;
}

void	sa(t_stack_node **a, int print)
{
	swap(a);
	if (!print)
		ft_printf("sa\n");
}

void	sb(t_stack_node **b, int print)
{
	swap(b);
	if (!print)
		ft_printf("sb\n");
}

void	ss(t_stack_node **a, t_stack_node **b, int print)
{
	swap(a);
	swap(b);
	if (!print)
		ft_printf("ss\n");
}
