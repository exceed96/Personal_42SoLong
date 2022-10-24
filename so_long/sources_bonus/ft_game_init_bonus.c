/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game_init_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:18:25 by sangyeki          #+#    #+#             */
/*   Updated: 2022/05/21 16:39:29 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

int	ft_key_press(int keycode, t_game_ct *g)
{
	if (keycode == KEY_ESC)
	{
		printf("Forced termination\n");
		mlx_destroy_window(g->mlx, g->win);
		exit(0);
	}
	if (keycode == KEY_W)
		ft_move_w(g);
	else if (keycode == KEY_A)
		ft_move_a(g);
	else if (keycode == KEY_S)
		ft_move_s(g);
	else if (keycode == KEY_D)
		ft_move_d(g);
	mlx_string_put(g->mlx, g->win, 10, 10, 0xFFFFFFFF, ft_itoa(g->walk_count));
	return (0);
}

void	ft_game_init(t_game_ct *g, char *map)
{
	g->mlx = mlx_init();
	g->g_img = img_init(g->mlx);
	ft_map_read(map, g);
	ft_map_check(g);
	g->win = mlx_new_window(g->mlx, g->width * 32, g->height * 32, "so_long");
	ft_image_setting(g);
}
