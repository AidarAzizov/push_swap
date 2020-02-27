/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asusan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 20:02:43 by asusan            #+#    #+#             */
/*   Updated: 2019/11/26 20:02:44 by asusan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_str s;

	install(&s);
	if (argc < 2)
		return (0);
	else
		parse(argc, argv, &s);
	quicksort(&s);
	free_info(&s);
	return (0);
}
