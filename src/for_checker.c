/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asusan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 20:24:48 by asusan            #+#    #+#             */
/*   Updated: 2019/11/28 20:24:50 by asusan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	for_push(t_str *s, const char *line)
{
	if (ft_strcmp(line, "pa") == 0)
		push_back(s, 'a', 0);
	else
		push_back(s, 'b', 0);
}

void	for_swap(t_str *s, const char *line)
{
	if (ft_strcmp(line, "sa") == 0)
		swap_2(&s->a, s->count_a, 'a', 0);
	else if (ft_strcmp(line, "sb") == 0)
		swap_2(&s->b, s->count_b, 'b', 0);
	else
		swapswap(s, 0);
}

void	for_rotate(t_str *s, const char *line)
{
	if (ft_strcmp(line, "ra") == 0)
		rotate(&s->a, s->count_a, 'a', 0);
	else if (ft_strcmp(line, "rb") == 0)
		rotate(&s->b, s->count_b, 'b', 0);
	else
		rotaterotate(s, 0);
}

void	for_rev_rotate(t_str *s, const char *line)
{
	if (ft_strcmp(line, "rra") == 0)
		rev_rotate(&s->a, s->count_a, 'a', 0);
	else if (ft_strcmp(line, "rrb") == 0)
		rev_rotate(&s->b, s->count_b, 'b', 0);
	else
		rev_rotaterotate(s, 0);
}

void	check_instruction(const char *line, t_str *s)
{
	if (ft_strcmp(line, "pb") == 0 || ft_strcmp(line, "pa") == 0)
		for_push(s, line);
	else if (ft_strcmp(line, "sb") == 0 ||
	ft_strcmp(line, "sa") == 0 || ft_strcmp(line, "ss") == 0)
		for_swap(s, line);
	else if (ft_strcmp(line, "ra") == 0 ||
	ft_strcmp(line, "rb") == 0 || ft_strcmp(line, "rr") == 0)
		for_rotate(s, line);
	else if (ft_strcmp(line, "rra") == 0 ||
	ft_strcmp(line, "rrb") == 0 || ft_strcmp(line, "rrr") == 0)
		for_rev_rotate(s, line);
	else
		error();
}
