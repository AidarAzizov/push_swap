/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asusan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 15:03:29 by asusan            #+#    #+#             */
/*   Updated: 2019/11/27 15:03:30 by asusan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		is_sort(const int *arr, int count)
{
	int i;

	i = -1;
	while (++i != count - 1)
	{
		if (arr[i] > arr[i + 1])
			return (0);
	}
	return (1);
}

int		change(t_str *s, int val)
{
	int i;

	i = -1;
	while (++i != s->all_count)
	{
		if (s->sorted_arr[i] == val)
			return (s->all_count - i - 1);
	}
	return (-1);
}

void	for_three_five(t_str *s)
{
	if (s->all_count == 3)
		three(s, 0);
	else if (s->all_count == 5)
		five(s);
	else
		four(s);
}

int		is_neigh(t_str *s, int first, int second)
{
	int i;

	i = -1;
	while (++i != s->all_count - 1)
	{
		if ((s->sorted_arr[i] == first &&
		s->sorted_arr[i + 1] == second) ||
		(s->sorted_arr[i] == second && s->sorted_arr[i + 1] == first))
			return (1);
	}
	return (0);
}

int		is_min_max(t_str *s, int first, int second)
{
	if (s->sorted_arr[0] == first && s->sorted_arr[s->all_count - 1] == second)
		return (1);
	if (s->sorted_arr[0] == second && s->sorted_arr[s->all_count - 1] == first)
		return (1);
	return (0);
}
