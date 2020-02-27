/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asusan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 14:44:56 by asusan            #+#    #+#             */
/*   Updated: 2019/11/28 14:44:58 by asusan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		for_five(t_str *s)
{
	if (is_neigh(s, s->a[0], s->a[1]) && is_neigh(s, s->a[0], s->a[2]))
	{
		swap_2(&s->a, s->count_a, 'a', 1);
		if (is_sort(s->a, s->count_a))
			return (1);
	}
	else if ((is_neigh(s, s->a[0], s->a[2]) ||
	is_min_max(s, s->a[0], s->a[2])) && !is_neigh(s, s->a[0], s->a[1]))
	{
		swap_2(&s->a, s->count_a, 'a', 1);
		if (is_sort(s->a, s->count_a))
			return (1);
		rotate(&s->a, s->count_a, 'a', 1);
	}
	else if ((is_neigh(s, s->a[0], s->a[4]) ||
	is_min_max(s, s->a[0], s->a[4])) &&
	!is_neigh(s, s->a[0], s->a[1]))
		rev_rotate(&s->a, s->count_a, 'a', 1);
	push_back(s, 'b', 1);
	push_back(s, 'b', 1);
	return (0);
}

void	if_ch_three(t_str *s)
{
	rotate(&s->a, s->count_a, 'a', 1);
	push_back(s, 'a', 1);
	push_back(s, 'a', 1);
	rev_rotate(&s->a, s->count_a, 'a', 1);
}

void	if_ch_two(t_str *s)
{
	rev_rotate(&s->a, s->count_a, 'a', 1);
	push_back(s, 'a', 1);
	push_back(s, 'a', 1);
	rotate(&s->a, s->count_a, 'a', 1);
}

void	if_ch_one(t_str *s)
{
	push_back(s, 'a', 1);
	push_back(s, 'a', 1);
	rotate(&s->a, s->count_a, 'a', 1);
	rotate(&s->a, s->count_a, 'a', 1);
}

void	if_ch_another(t_str *s)
{
	if (is_min_max(s, s->b[0], s->b[1]))
	{
		push_back(s, 'a', 1);
		rotate(&s->a, s->count_a, 'a', 1);
		push_back(s, 'a', 1);
	}
	else
	{
		push_back(s, 'a', 1);
		push_back(s, 'a', 1);
	}
}
