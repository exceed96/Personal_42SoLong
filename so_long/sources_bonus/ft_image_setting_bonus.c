/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_image_setting_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:38:17 by sangyeki          #+#    #+#             */
/*   Updated: 2022/05/20 20:10:53 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

t_game_ig	img_init(void *mlx)
{
	int			wid;
	int			hei;
	t_game_ig	ret;

	ret.he_l = mlx_xpm_file_to_image(mlx, "./images/he_l.xpm", &wid, &hei);
	ret.he_r = mlx_xpm_file_to_image(mlx, "./images/he_r.xpm", &wid, &hei);
	ret.floor = mlx_xpm_file_to_image(mlx, "./images/floor.xpm", &wid, &hei);
	ret.wall = mlx_xpm_file_to_image(mlx, "./images/wall.xpm", &wid, &hei);
	ret.exit = mlx_xpm_file_to_image(mlx, "./images/exit.xpm", &wid, &hei);
	ret.key = mlx_xpm_file_to_image(mlx, "./images/key.xpm", &wid, &hei);
	ret.start = mlx_xpm_file_to_image(mlx, "./images/start.xpm", &wid, &hei);
	ret.slime = mlx_xpm_file_to_image(mlx, "./images/slime.xpm", &wid, &hei);
	return (ret);
}

void	ft_draw_image(t_game_ct *g, int w, int h)
{
	char	c;

	c = g->str_line[g->width * h + w];
	if (c == '1' || c == 'P' || c == 'E' || c == 'C' || c == '0' || c == 'L'
		|| c == 'S')
		mlx_put_image_to_window(g->mlx, g->win, g->g_img.floor, w * 32, h * 32);
	if (c == '1')
		mlx_put_image_to_window(g->mlx, g->win, g->g_img.wall, w * 32, h * 32);
	else if (c == 'P')
		mlx_put_image_to_window(g->mlx, g->win, g->g_img.he_r, w * 32, h * 32);
	else if (c == 'C')
		mlx_put_image_to_window(g->mlx, g->win, g->g_img.key, w * 32, h * 32);
	else if (c == 'E')
		mlx_put_image_to_window(g->mlx, g->win, g->g_img.exit, w * 32, h * 32);
	else if (c == 'L')
		mlx_put_image_to_window(g->mlx, g->win, g->g_img.he_l, w * 32, h * 32);
	else if (c == 'S')
		mlx_put_image_to_window(g->mlx, g->win, g->g_img.slime, w * 32, h * 32);
}

void	ft_image_setting(t_game_ct *g)
{
	int	height;
	int	width;

	height = 0;
	while (height < g->height)
	{
		width = 0;
		while (width < g->width)
		{
			ft_draw_image(g, width, height);
			width++;
		}
		height++;
	}
}
