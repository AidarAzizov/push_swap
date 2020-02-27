/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asusan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 20:05:58 by asusan            #+#    #+#             */
/*   Updated: 2019/11/26 20:06:00 by asusan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/ft_printf.h"

typedef struct	s_str
{
	int	*sorted_arr;
	int	*sort_three;
	int	all_count;
	int	count_a;
	int	count_b;
	int	*arr_bound;
	int	count_bound;
	int	*a;
	int	*b;
	int	helper;
}				t_str;

void			parse(int argc, char **argv, t_str *s);
int				for_string(const char *arr);
void			free_info(t_str *s);

void			four(t_str *s);
void			five(t_str *s);
void			three(t_str *s, int flag);

int				*bubble(int *a, int count);
int				*copy_int(const int *arr, int count);

void			for_three_five(t_str *s);
int				is_sort(const int *arr, int count);
int				change(t_str *s, int val);
int				is_min_max(t_str *s, int first, int second);
int				is_neigh(t_str *s, int first, int second);

int				count_go_pos_up(t_str *s, int val);
int				count_go_pos_down(t_str *s, int val);
void			delete_one_group(t_str *s);
int				count_space(const char *s);
int				check(int argc, char **argv);

void			install(t_str *s);
void			install_to_bound(t_str *s);
int				main_installer(t_str *s);

void			push_back(t_str *s, char symb, int bool);
void			swap_2(int **arr, int count, char symb, int bool);
void			swapswap(t_str *arr, int bool);
void			rotate(int **arr, int count, char symb, int bool);
void			rotaterotate(t_str *arr, int bool);
void			rev_rotate(int **arr, int count, char symb, int bool);
void			rev_rotaterotate(t_str *arr, int bool);

void			quicksort(t_str *s);
void			sort_num(t_str *s);

void			if_ch_another(t_str *s);
void			if_ch_one(t_str *s);
void			if_ch_two(t_str *s);
void			if_ch_three(t_str *s);
int				for_five(t_str *s);

void			if_ch_1_2(t_str *s);
void			if_ch_2_2(t_str *s);
void			if_ch_another_2(t_str *s);

void			error();
char			*reter_arr(const char *arr);
void			check_overval(int val, const char *s);

void			for_push(t_str *s, const char *line);
void			for_swap(t_str *s, const char *line);
void			for_rotate(t_str *s, const char *line);
void			for_rev_rotate(t_str *s, const char *line);
void			check_instruction(const char *line, t_str *s);

int				find_up(t_str *s, int val);
int				find_down(t_str *s, int val);

#endif
