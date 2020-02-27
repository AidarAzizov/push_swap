/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   overval.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asusan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 17:38:33 by asusan            #+#    #+#             */
/*   Updated: 2019/11/28 17:38:34 by asusan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

char	*reter_arr(const char *arr)
{
	int count;

	count = 0;
	while (*arr == ' ')
		arr++;
	while (arr[count] != '\0' && arr[count] != ' ')
		count++;
	return (ft_strsub(arr, 0, count));
}

void	check_overval(int val, const char *s)
{
	char *temp;
	char *temp_2;

	if (s[0] == '+')
		s++;
	if (!(temp_2 = reter_arr(s)))
		exit(1);
	temp = ft_itoa(val);
	if (ft_strcmp(temp_2, temp))
		error();
	free(temp);
	free(temp_2);
}
