/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asusan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 14:58:13 by asusan            #+#    #+#             */
/*   Updated: 2019/11/27 14:58:15 by asusan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push(int **x, int **y, int *count_x, int *count_y)
{
	int	*temp;
	int	i;
	int	val;

	if (*count_x == 0)
		return ;
	val = (*x)[0];
	*count_x -= 1;
	temp = copy_int(*x + 1, *count_x);
	free(*x);
	*x = copy_int(temp, *count_x);
	free(temp);
	temp = copy_int(*y, *count_y);
	*count_y += 1;
	free(*y);
	if (!(*y = (int*)malloc(sizeof(int) * (*count_y))))
		exit(1);
	(*y)[0] = val;
	i = 0;
	while (++i != *count_y)
		(*y)[i] = temp[i - 1];
	free(temp);
}

void	push_back(t_str *s, char symb, int bool)
{
	if (symb == 'a')
		push(&s->b, &s->a, &s->count_b, &s->count_a);
	else
		push(&s->a, &s->b, &s->count_a, &s->count_b);
	if (bool == 1)
		ft_printf("p%c\n", symb);
}

void	swap_2(int **arr, int count, char symb, int bool)
{
	int	temp;

	if (count < 2)
		return ;
	temp = (*arr)[0];
	(*arr)[0] = (*arr)[1];
	(*arr)[1] = temp;
	if ((int)symb != 0 && bool == 1)
		ft_printf("s%c\n", symb);
}

void	swapswap(t_str *arr, int bool)
{
	swap_2(&arr->a, arr->count_a, 0, 0);
	swap_2(&arr->b, arr->count_b, 0, 0);
	if (bool == 1)
		ft_printf("ss\n");
}

void	rotate(int **arr, int count, char symb, int bool)
{
	int	*temp;
	int i;

	if (count < 2)
		return ;
	i = 0;
	temp = copy_int(*arr, count);
	while (++i != count)
		(*arr)[i - 1] = temp[i];
	(*arr)[i - 1] = temp[0];
	free(temp);
	if ((int)symb != 0 && bool == 1)
		ft_printf("r%c\n", symb);
}
