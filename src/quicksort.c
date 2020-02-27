/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asusan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 15:19:54 by asusan            #+#    #+#             */
/*   Updated: 2019/11/27 15:19:56 by asusan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	helper_for_sort_num(t_str *s)
{
	while (s->count_a != 0)
	{
		push_back(s, 'b', 1);
		if (s->count_a > 1 && s->a[0] > s->a[1] && s->b[0] < s->b[1])
			swapswap(s, 1);
		if (s->count_a > 1 && s->a[0] > s->a[1])
			swap_2(&s->a, s->count_a, 'a', 1);
	}
}

void	sort_num(t_str *s)
{
	int count;
	int up;
	int down;

	count = 1;
	helper_for_sort_num(s);
	while (s->count_b > 0)
	{
		if ((up = find_up(s, s->sorted_arr[s->all_count - count]))
		>= (down = find_down(s, s->sorted_arr[s->all_count - count])))
		{
			while (--down >= 0)
				rev_rotate(&s->b, s->count_b, 'b', 1);
		}
		else
		{
			while (--up >= 0)
				rotate(&s->b, s->count_b, 'b', 1);
		}
		if (is_neigh(s, s->a[0], s->b[0]) || s->count_a == 0)
			push_back(s, 'a', 1);
		count++;
	}
}

void	inside_logic(t_str *s)
{
	int i;
	int memor;

	if (count_go_pos_down(s, s->arr_bound[0]) >
	(memor = count_go_pos_up(s, s->arr_bound[0])) && memor > 0)
	{
		i = -1;
		while (++i < memor)
			rotate(&s->a, s->count_a, 'a', 1);
	}
	else if ((memor = count_go_pos_down(s, s->arr_bound[0])) <
	s->count_a && memor > 0)
	{
		i = -1;
		while (++i < memor)
			rev_rotate(&s->a, s->count_a, 'a', 1);
	}
	else
		delete_one_group(s);
}

void	quicksort(t_str *s)
{
	if (main_installer(s))
		return ;
	while (s->count_bound != 0 && s->count_a > 0)
	{
		if (s->a[0] <= s->arr_bound[0])
			push_back(s, 'b', 1);
		else
			inside_logic(s);
	}
	sort_num(s);
}
