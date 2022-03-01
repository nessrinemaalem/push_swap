/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:33:51 by imaalem           #+#    #+#             */
/*   Updated: 2022/02/21 10:25:13 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	empty_b(t_list *a, t_list *b)
{
	while (b->first->nbr != -1)
	{
		pa(b, a);
		b->nb_elem--;
		a->nb_elem++;
	}
}

void	push_last_bit_one(t_list *a, t_list *b, int size, int bit_max)
{
	int		i;
	int		nbr;

	i = 0;
	while (i < size)
	{
		nbr = a->first->nbr;
		if (((nbr >> bit_max) & 1) == 0)
			pb(a, b);
		else
			ra(a);
		i++;
	}
}

void	sort_big_stack(t_list *a)
{
	t_list		*b;
	int			size;
	int			max_num;
	int			bit_max;

	b = initialization(-1);
	size = a->nb_elem;
	max_num = size - 1;
	bit_max = 0;
	sort_list(a);
	while (max_num >> bit_max != 0)
	{
		push_last_bit_one(a, b, size, bit_max);
		empty_b(a, b);
		bit_max++;
	}
	sup_all_list(b);
}
