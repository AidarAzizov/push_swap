/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asusan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 15:01:07 by asusan            #+#    #+#             */
/*   Updated: 2019/11/27 15:01:09 by asusan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		*copy_int(const int *arr, int count)
{
	int	*temp;
	int	i;

	i = -1;
	if (!(temp = (int*)malloc(sizeof(int) * count)))
		exit(1);
	while (++i != count)
		temp[i] = arr[i];
	return (temp);
}

void	swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int		*helper_for_bubble(int tr, int count, int *a, int **copy)
{
	int i;
	int *temp;

	if (!(temp = (int*)malloc(sizeof(int) * count)))
		exit(1);
	if (tr == 0)
	{
		free(temp);
		free(*copy);
		return (NULL);
	}
	i = -1;
	while (++i != count)
	{
		temp[i] = a[i];
		a[i] = (*copy)[i];
	}
	free(*copy);
	return (temp);
}

int		*bubble(int *a, int count)
{
	int	i;
	int	j;
	int	*copy;
	int	tr;

	tr = 0;
	copy = copy_int(a, count);
	i = 0;
	while (i != count)
	{
		j = 0;
		while (j != count - i - 1)
		{
			if (a[j] > a[j + 1])
			{
				swap(&a[j], &a[j + 1]);
				tr = 1;
			}
			j++;
		}
		++i;
	}
	return (helper_for_bubble(tr, count, a, &copy));
}
