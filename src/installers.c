/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   installers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asusan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 15:04:30 by asusan            #+#    #+#             */
/*   Updated: 2019/11/27 15:04:31 by asusan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		find_up(t_str *s, int val)
{
	int i;

	i = -1;
	while (++i != s->count_b)
	{
		if (s->b[i] == val)
			return (i);
	}
	return (1000000);
}

int		find_down(t_str *s, int val)
{
	int i;
	int count;

	i = s->count_b;
	count = 1;
	while (--i != -1)
	{
		if (s->b[i] == val)
			return (count);
		count++;
	}
	return (1000000);
}

void	install(t_str *s)
{
	s->a = NULL;
	s->b = NULL;
	s->count_a = 0;
	s->count_b = 0;
	s->sorted_arr = NULL;
}

void	install_to_bound(t_str *s)
{
	int i;
	int j;
	int continu;

	i = -1;
	j = -1;
	continu = s->all_count / s->count_bound;
	while (++i != s->all_count)
	{
		if (i % continu == 0 && i != 0)
			s->arr_bound[++j] = s->sorted_arr[i];
	}
}

int		main_installer(t_str *s)
{
	if (!(s->sorted_arr = bubble(s->a, s->count_a)))
		return (1);
	if (s->all_count == 5 || s->all_count == 4 || s->all_count == 3)
	{
		for_three_five(s);
		return (1);
	}
	if (s->all_count == 2)
	{
		if (s->a[0] > s->a[1])
			swap_2(&s->a, s->count_a, 'a', 1);
		return (1);
	}
	if (s->all_count < 40)
		s->count_bound = 3;
	else if (s->all_count < 200)
		s->count_bound = 8;
	else
		s->count_bound = 16;
	if (!(s->arr_bound = (int*)malloc(sizeof(int) * s->count_bound)))
		exit(1);
	install_to_bound(s);
	return (0);
}
