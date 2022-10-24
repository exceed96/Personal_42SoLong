/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:44:27 by sangyeki          #+#    #+#             */
/*   Updated: 2022/05/21 18:35:50 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	main(int argc, char **argv)
{
	t_game_ct	*g;

	if (argc != 2)
		ft_print_error("Argument count isn't 2\n");
	else
	{	
		g = malloc(sizeof(t_game_ct));
		ft_game_init(g, argv[1]);
		mlx_hook(g->win, X_EVENT_KEY_PRESS, 0, &ft_key_press, g);
		mlx_hook(g->win, X_EVENT_KEY_EXIT, 0, &ft_print_esc, g);
		mlx_loop(g->mlx);
	}
	return (0);
}
