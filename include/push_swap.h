/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:30:56 by imaalem           #+#    #+#             */
/*   Updated: 2022/02/21 10:28:39 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "../libft/libft.h"

typedef struct s_element
{
	int					nbr;
	int					pos;
	struct s_element	*next;
}						t_element;

typedef struct s_list
{
	t_element	*first;
	int			nb_elem;
}				t_list;

int			mid_insertion(t_list *list, t_element *element, int nw_nbr);
t_list		*copy_list(t_list *a);
t_list		*initialization(int nbr);
int			insertion(t_list *list, int nvnbr);
int			print_list(t_list *list);
void		count_blocks(t_list *list);
int			sup_all_list(t_list *list);
t_list		*parsing(int split_index, int ac, char **av, int malloc);
void		sort_small_stack(t_list *a);
void		sort_big_stack(t_list *a);
int			a_is_sorted(t_list *list);
void		swap_element(t_element *a, t_element *b);
void		attribute_order(t_list *to_order, t_list *sorted);
void		pb(t_list *a, t_list *b);
void		pa(t_list *a, t_list *b);
void		ra(t_list *a);
t_list		*order_list(t_list *a);
void		sa(t_list *a);
void		rra(t_list *a);
t_list		*sort_list(t_list *a);
void		sort_list_of_three(t_list *a, int s, int m, int g);
void		sort_list_of_four(t_list *a);
void		sort_list_of_five(t_list *a);
t_list		*convert_single_string(char *av);
int			count_nbr(char const *s, char c);
t_list		*convert_arg_into_list(int split, int ac, char **av);
void		compare_and_swap(t_list *a, t_element *el1, t_element *el2);
t_list		*order_list(t_list *a);
t_list		*sort_list(t_list *a);
void		free_tab(char **tab);
int			ft_count_str(char *str, char c);
int			scroll_str_and_check_if_digit(int ac, char **av, int i, int j);

#endif