/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_sorting.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:20:21 by imaalem           #+#    #+#             */
/*   Updated: 2022/02/21 10:43:54 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	compare_and_swap(t_list *a, t_element *el1, t_element *el2)
{
	int	i;

	i = 0;
	while (i < a->nb_elem - 1)
	{
		while (el2 != NULL)
		{
			if (el2->nbr < el1->nbr)
			{
				swap_element(el1, el2);
				el2 = el2->next;
			}
			else
				el2 = el2->next;
		}
		i++;
		el1 = el1->next;
		el2 = el1->next;
	}
}

t_list	*sort_list(t_list *a)
{
	t_list		*copy;
	t_element	*el1;
	t_element	*el2;
	int			i;

	i = 0;
	copy = copy_list(a);
	el1 = copy->first;
	el2 = copy->first->next;
	compare_and_swap(a, el1, el2);
	attribute_order(a, copy);
	sup_all_list(copy);
	return (a);
}
