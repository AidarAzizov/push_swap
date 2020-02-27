/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asusan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 15:11:18 by asusan            #+#    #+#             */
/*   Updated: 2019/11/27 15:11:20 by asusan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		count_go_pos_up(t_str *s, int val)
{
	int i;
	int counter;

	i = -1;
	counter = 0;
	while (++i != s->count_a)
	{
		if (val >= s->a[i])
			return (counter);
		counter++;
	}
	return (-1);
}

int		count_go_pos_down(t_str *s, int val)
{
	int i;
	int counter;

	i = -1;
	counter = 0;
	while (++i != s->count_a)
	{
		counter++;
		if (val >= s->a[s->count_a - i - 1])
			return (counter);
	}
	return (-1);
}

void	delete_one_group(t_str *s)
{
	int *temp;
	int i;

	i = -1;
	temp = copy_int(s->arr_bound, s->count_bound);
	free(s->arr_bound);
	if (s->count_bound > 1)
	{
		if (!(s->arr_bound = (int*)malloc(sizeof(int) * (s->count_bound - 1))))
			exit(1);
		while (++i != s->count_bound - 1)
			s->arr_bound[i] = temp[i + 1];
	}
	else
		s->arr_bound = NULL;
	free(temp);
	s->count_bound--;
}

int		check(int argc, char **argv)
{
	int i;
	int count_num;

	count_num = 0;
	i = -1;
	while (++i != argc - 1)
		count_num += for_string(argv[i + 1]);
	return (count_num);
}

int		count_space(const char *s)
{
	int i;

	i = 0;
	while (s[i] == ' ')
		i++;
	while (s[i] == '-' || s[i] == '+' || ft_isdigit(s[i]))
		i++;
	while (s[i] == ' ')
		i++;
	return (i - 1);
}
