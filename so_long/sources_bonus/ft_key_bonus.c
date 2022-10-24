/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:40:57 by sangyeki          #+#    #+#             */
/*   Updated: 2022/05/20 14:01:46 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./so_long_bonus.h"

void	ft_move_w(t_game_ct *g)
{
	int	size;

	size = 0;
	while (size++ < ft_strlenn(g->str_line))
	{
		if (g->str_line[size] == 'P' || g->str_line[size] == 'L')
			break ;
	}
	if (g->str_line[size - g->width] == 'S')
		ft_print_fail("You died..uu\n");
	if (g->str_line[size - g->width] == 'C')
		g->col_count++;
	if (g->str_line[size - g->width] != '1'
		&& g->str_line[size - g->width] != 'E')
	{
		g->walk_count++;
		g->str_line[size - g->width] = g->str_line[size];
		g->str_line[size] = '0';
		printf("%d\n", g->walk_count);
		ft_image_setting(g);
	}
	else if (g->str_line[size - g->width] == 'E' && g->col_key == g->col_count)
		ft_print_clear("You clear the mission!\n", g);
}

void	ft_move_a(t_game_ct *g)
{
	int	size;

	size = 0;
	while (size++ < ft_strlenn(g->str_line))
	{
		if (g->str_line[size] == 'P' || g->str_line[size] == 'L')
			break ;
	}
	if (g->str_line[size - 1] == 'S')
		ft_print_fail("You died..uu\n");
	if (g->str_line[size - 1] == 'C')
		g->col_count++;
	if (g->str_line[size - 1] != '1'
		&& g->str_line[size - 1] != 'E')
	{
		g->walk_count++;
		g->str_line[size] = '0';
		g->str_line[size - 1] = 'L';
		printf("%d\n", g->walk_count);
		ft_image_setting(g);
	}
	else if (g->str_line[size - 1] == 'E' && g->col_key == g->col_count)
		ft_print_clear("You clear the mission!\n", g);
}

void	ft_move_s(t_game_ct *g)
{
	int	size;

	size = 0;
	while (size++ < ft_strlenn(g->str_line))
	{
		if (g->str_line[size] == 'P' || g->str_line[size] == 'L')
			break ;
	}
	if (g->str_line[size + g->width] == 'S')
		ft_print_fail("You died..uu\n");
	if (g->str_line[size + g->width] == 'C')
		g->col_count++;
	if (g->str_line[size + g->width] != '1'
		&& g->str_line[size + g->width] != 'E')
	{
		g->walk_count++;
		g->str_line[size + g->width] = g->str_line[size];
		g->str_line[size] = '0';
		printf("%d\n", g->walk_count);
		ft_image_setting(g);
	}
	else if (g->str_line[size + g->width] == 'E' && g->col_key == g->col_count)
		ft_print_clear("You clear the mission!\n", g);
}

void	ft_move_d(t_game_ct *g)
{
	int	size;

	size = 0;
	while (size++ < ft_strlenn(g->str_line))
	{
		if (g->str_line[size] == 'P' || g->str_line[size] == 'L')
			break ;
	}
	if (g->str_line[size + 1] == 'S')
		ft_print_fail("You died..uu\n");
	if (g->str_line[size + 1] == 'C')
		g->col_count++;
	if (g->str_line[size + 1] != '1'
		&& g->str_line[size + 1] != 'E')
	{
		g->walk_count++;
		g->str_line[size] = '0';
		g->str_line[size + 1] = 'P';
		printf("%d\n", g->walk_count);
		ft_image_setting(g);
	}
	else if (g->str_line[size + 1] == 'E' && g->col_key == g->col_count)
		ft_print_clear("You clear the mission!\n", g);
}
