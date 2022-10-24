/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_error_check_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:03:18 by sangyeki          #+#    #+#             */
/*   Updated: 2022/05/20 20:11:07 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	ft_map_char_check(t_game_ct *g)
{
	int		i;
	char	c;

	i = 0;
	while (g->str_line[i])
	{
		c = g->str_line[i++];
		if (c != '0' && c != '1' && c != 'E' && c != 'P' && c != 'C'
			&& c != 'S')
			ft_print_error("Wrong char exist\n");
	}
}

void	ft_map_error_check(t_game_ct *g)
{
	int	start_count;
	int	exit_count;
	int	i;

	start_count = 0;
	exit_count = 0;
	i = 0;
	g->col_key = 0;
	g->col_count = 0;
	while (i++ < ft_strlenn(g->str_line))
	{
		if (g->str_line[i] == 'E')
			exit_count++;
		else if (g->str_line[i] == 'P')
			start_count++;
		else if (g->str_line[i] == 'C')
			g->col_key++;
	}
	if (!exit_count)
		ft_print_error("exit position error\n");
	if (start_count != 1)
		ft_print_error("start position error\n");
	if (!g->col_key)
		ft_print_error("collect key position error\n");
}

void	ft_map_wall_check(t_game_ct *g)
{
	int	i;

	i = 0;
	while (i < ft_strlenn(g->str_line))
	{
		if (i < g->width && g->str_line[i] != '1')
			ft_print_error("wall error\n");
		else if (!(i % g->width) || i % g->width == g->width - 1)
		{
			if (g->str_line[i] != '1')
				ft_print_error("wall error\n");
		}
		else if (i > ft_strlenn(g->str_line) - g->width)
		{
			if (g->str_line[i] != '1')
				ft_print_error("wall eroor\n");
		}
		i++;
	}
}

void	ft_map_check(t_game_ct *g)
{
	if (g->height * g->width != ft_strlenn(g->str_line))
		ft_print_error("No Rectangular\n");
	ft_map_wall_check(g);
	ft_map_char_check(g);
	ft_map_error_check(g);
}
