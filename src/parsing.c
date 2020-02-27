/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asusan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 18:05:41 by asusan            #+#    #+#             */
/*   Updated: 2019/11/28 18:05:43 by asusan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	duplicate(t_str *s)
{
	int i;
	int j;

	i = -1;
	while (++i != s->count_a)
	{
		j = i;
		while (++j < s->count_a)
		{
			if (s->a[i] == s->a[j])
				error();
		}
	}
}

int		for_string(const char *arr)
{
	int i;
	int count_num;

	i = 0;
	count_num = 0;
	while (arr[i] != '\0')
	{
		if (arr[i] == '-' || arr[i] == '+')
			i++;
		if (ft_isdigit(arr[i]))
		{
			while (ft_isdigit(arr[i]))
				i++;
			++count_num;
		}
		while (arr[i] == ' ')
			i++;
		if (arr[i] == '\0')
			return (count_num);
		if (!(ft_isdigit(arr[i]) ||
		((arr[i] == '-' || arr[i] == '+') && ft_isdigit(arr[i + 1]))))
			error();
	}
	return (count_num);
}

int		have_val(const char *arr)
{
	int i;

	i = -1;
	while (arr[++i] != '\0')
	{
		if (ft_isdigit(arr[i]))
			return (1);
	}
	return (0);
}

void	parse(int argc, char **argv, t_str *s)
{
	int i;
	int j;
	int k;

	i = 0;
	k = -1;
	s->count_a = check(argc, argv);
	s->all_count = s->count_a;
	if (!(s->a = (int*)malloc(sizeof(int) * s->count_a)))
		exit(1);
	while (++i != argc)
	{
		j = -1;
		while (++j < (int)ft_strlen(argv[i]) && have_val(argv[i] + j))
		{
			s->a[++k] = ft_atoi(argv[i] + j);
			check_overval(s->a[k], argv[i] + j);
			j += count_space(argv[i] + j);
		}
	}
	duplicate(s);
}

void	free_info(t_str *s)
{
	free(s->b);
	free(s->a);
	free(s->arr_bound);
	free(s->sorted_arr);
}
