/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:33:37 by imaalem           #+#    #+#             */
/*   Updated: 2022/02/21 14:06:04 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	check_no_duplicate(int split, int len, char **av)
{
	int	i;
	int	j;

	if (split == 1)
		i = 0;
	else
		i = 1;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_no_digit_overflow(int split, int ac, char **av)
{
	int		i;
	long	number;

	if (split == 1)
		i = 0;
	else
		i = 1;
	while (i < ac && av[i] != NULL)
	{
		number = ft_atol(av[i]);
		if (number > 2147483647 || number < -2147483648)
			return (-1);
		else
			i++;
	}
	return (0);
}

int	check_stack_is_digit(int split, int ac, char **av)
{
	int	i;
	int	j;

	if (split == 1)
		i = 0;
	else
		i = 1;
	j = 0;
	if (scroll_str_and_check_if_digit(ac, av, i, j) != 0)
		return (-1);
	return (0);
}

t_list	*parsing(int split, int ac, char **av, int malloc)
{
	t_list	*a;
	int		error;

	error = 0;
	if (check_stack_is_digit(split, ac, av) < 0)
		error--;
	if (check_no_digit_overflow(split, ac, av) < 0)
		error--;
	if (check_no_duplicate(split, ac, av) < 0)
		error--;
	if (error != 0 && malloc == 1)
	{
		free_tab(av);
		return (NULL);
	}
	if (error != 0)
		return (NULL);
	a = convert_arg_into_list(split, ac, av);
	if (malloc == 1)
		free_tab(av);
	return (a);
}

t_list	*convert_single_string(char *av)
{
	char	**tab;
	int		split;

	split = 1;
	tab = ft_split(av, ' ');
	return (parsing(split, ft_count_str(av, ' '), tab, 1));
}
