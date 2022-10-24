/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_message_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:36:42 by sangyeki          #+#    #+#             */
/*   Updated: 2022/05/21 17:54:21 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./so_long_bonus.h"

void	ft_print_fail(char *str)
{
	printf("%s", str);
	exit(0);
}

void	ft_print_error(char *str)
{
	printf("Error\n%s", str);
	exit(1);
}

void	ft_print_clear(char *str, t_game_ct *g)
{
	printf("%d\n", ++g->walk_count);
	printf("%s\n", str);
	exit(0);
}

int	ft_print_esc(t_game_ct *g)
{
	printf("Click ESC\n");
	mlx_destroy_window(g->mlx, g->win);
	exit(0);
}
