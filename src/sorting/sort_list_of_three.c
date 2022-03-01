/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list_of_three.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:34:17 by imaalem           #+#    #+#             */
/*   Updated: 2022/02/20 21:26:37 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	top_is_greater(t_list *a, int smallest)
{
	if (a->first->next->nbr == smallest)
		ra(a);
	else
	{
		ra(a);
		sa(a);
	}
}

void	top_is_median(t_list *a, int smallest)
{
	if (a->first->next->nbr == smallest)
		sa(a);
	else
		rra(a);
}

void	top_is_smallest(t_list *a)
{
	sa(a);
	ra(a);
}

void	sort_list_of_three(t_list *a, int smallest, int median, int greatest)
{
	if (a->first->nbr == greatest)
		top_is_greater(a, smallest);
	else if (a->first->nbr == median)
		top_is_median(a, smallest);
	else if (a->first->nbr == smallest)
		top_is_smallest(a);
}
