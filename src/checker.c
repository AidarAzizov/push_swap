/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asusan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 15:38:22 by asusan            #+#    #+#             */
/*   Updated: 2019/11/28 15:38:23 by asusan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	reader(t_str *s)
{
	char	*line;
	int		true;
	int		count;

	count = 0;
	true = 0;
	if (is_sort(s->a, s->count_a))
		true = 1;
	while (get_next_line(0, &line))
	{
		check_instruction(line, s);
		if (*line != '\0')
			true = 0;
		free(line);
		count++;
	}
	if (((true == 0 && count != 0) || (true == 1 && count == 0))
	&& is_sort(s->a, s->count_a) && s->count_b == 0)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}

int		main(int argc, char **argv)
{
	t_str s;

	install(&s);
	if (argc == 1)
		return (0);
	else
		parse(argc, argv, &s);
	reader(&s);
	free_info(&s);
	return (0);
}
