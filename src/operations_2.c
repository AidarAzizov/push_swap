/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asusan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 14:59:48 by asusan            #+#    #+#             */
/*   Updated: 2019/11/27 14:59:49 by asusan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotaterotate(t_str *arr, int bool)
{
	rotate(&arr->a, arr->count_a, 0, bool);
	rotate(&arr->b, arr->count_b, 0, bool);
	if (bool == 1)
		ft_printf("rr\n");
}

void	rev_rotate(int **arr, int count, char symb, int bool)
{
	int	*temp;
	int	i;

	i = 0;
	if (count < 2)
		return ;
	temp = copy_int(*arr, count);
	while (++i != count)
	{
		(*arr)[i] = temp[i - 1];
	}
	(*arr)[0] = temp[i - 1];
	free(temp);
	if ((int)symb != 0 && bool == 1)
		ft_printf("rr%c\n", symb);
}

void	rev_rotaterotate(t_str *arr, int bool)
{
	rev_rotate(&arr->a, arr->count_a, 0, bool);
	rev_rotate(&arr->b, arr->count_b, 0, bool);
	if (bool == 1)
		ft_printf("rrr\n");
}
