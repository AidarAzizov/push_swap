/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asusan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 15:08:24 by asusan            #+#    #+#             */
/*   Updated: 2019/11/27 15:08:26 by asusan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	one(t_str *s, int flag)
{
	if (flag == 1 && s->b[0] < s->b[1])
		rev_rotaterotate(s, 1);
	else
		rev_rotate(&s->a, s->count_a, 'a', 1);
	swap_2(&s->a, s->count_a, 'a', 1);
}

void	two(t_str *s, int flag)
{
	if (s->a[0] == s->sort_three[2])
	{
		if (flag == 1 && s->b[0] < s->b[1])
			rotaterotate(s, 1);
		else
			rotate(&s->a, s->count_a, 'a', 1);
	}
	else
	{
		if (flag == 1 && s->b[0] < s->b[1])
			swapswap(s, 1);
		else
			swap_2(&s->a, s->count_a, 'a', 1);
	}
}

void	tri(t_str *s, int flag)
{
	if (s->a[0] == s->sort_three[2])
	{
		swap_2(&s->a, s->count_a, 'a', 1);
		if (flag == 1 && s->b[0] < s->b[1])
			rotaterotate(s, 1);
		else
			rotate(&s->a, s->count_a, 'a', 1);
		rotate(&s->a, s->count_a, 'a', 1);
	}
	else
	{
		if (s->a[0] > s->a[1])
			swap_2(&s->a, s->count_a, 'a', 1);
		if (flag == 1 && s->b[0] < s->b[1])
			rev_rotaterotate(s, 1);
		else
			rev_rotate(&s->a, s->count_a, 'a', 1);
	}
}

void	three(t_str *s, int flag)
{
	if (is_sort(s->a, 3))
		return ;
	s->sort_three = bubble(s->a, 3);
	if (s->a[0] == s->sort_three[0])
		one(s, flag);
	else if (s->a[1] == s->sort_three[0])
		two(s, flag);
	else
		tri(s, flag);
	free(s->sort_three);
}
