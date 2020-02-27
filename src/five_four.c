/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asusan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 15:08:39 by asusan            #+#    #+#             */
/*   Updated: 2019/11/27 15:08:41 by asusan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	five(t_str *s)
{
	if (for_five(s))
		return ;
	if (s->a[0] > s->a[2] && s->b[0] <
	s->b[1] && s->b[1] != s->sorted_arr[s->all_count - 1])
		rotaterotate(s, 1);
	if ((s->b[0] < s->b[1] &&
	s->b[1] != s->sorted_arr[4]) ||
	(s->b[0] > s->b[1] && s->b[0] == s->sorted_arr[4]))
		rotate(&s->b, s->count_b, 'b', 1);
	three(s, 1);
	s->helper = change(s, s->b[1]);
	if (s->helper == 3)
		if_ch_three(s);
	else if (s->helper == 2)
		if_ch_two(s);
	else if (s->helper == 1)
		if_ch_one(s);
	else
		if_ch_another(s);
}

void	four(t_str *s)
{
	if ((is_neigh(s, s->a[0], s->a[3]) ||
	is_min_max(s, s->a[0], s->a[3])) &&
	!is_neigh(s, s->a[0], s->a[1]))
	{
		rotate(&s->a, s->count_a, 'a', 0);
		swap_2(&s->a, s->count_a, 'a', 0);
	}
	push_back(s, 'b', 0);
	push_back(s, 'b', 0);
	if (s->b[0] < s->b[1])
		swap_2(&s->b, s->count_b, 'b', 0);
	s->helper = change(s, s->b[0]);
	if (s->helper == 1)
		if_ch_1_2(s);
	else if (s->helper == 2)
		if_ch_2_2(s);
	else
		if_ch_another_2(s);
}
