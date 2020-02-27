/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asusan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 14:45:04 by asusan            #+#    #+#             */
/*   Updated: 2019/11/28 14:45:06 by asusan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	if_ch_1_2(t_str *s)
{
	if (s->a[0] < s->a[1])
		swap_2(&s->a, s->count_a, 'a', 1);
	push_back(s, 'a', 1);
	push_back(s, 'a', 1);
	rev_rotate(&s->a, s->count_a, 'a', 1);
}

void	if_ch_2_2(t_str *s)
{
	if (s->a[0] > s->a[1])
		swap_2(&s->a, s->count_a, 'a', 1);
	push_back(s, 'a', 1);
	push_back(s, 'a', 1);
}

void	if_ch_another_2(t_str *s)
{
	if (s->a[0] > s->a[1])
		swap_2(&s->a, s->count_a, 'a', 1);
	push_back(s, 'a', 1);
	push_back(s, 'a', 1);
	rev_rotate(&s->a, s->count_a, 'a', 1);
	rev_rotate(&s->a, s->count_a, 'a', 1);
}
