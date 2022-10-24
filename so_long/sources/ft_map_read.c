/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_read.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:31:16 by sangyeki          #+#    #+#             */
/*   Updated: 2022/05/21 17:44:31 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_map_read(char *filename, t_game_ct *g)
{
	char	*line;
	char	*str;
	int		fd;

	fd = open(filename, O_RDONLY);
	str = ft_strrchr(filename, '.');
	if (fd <= 0 || ft_strcmp(".ber", str) != 0)
		ft_print_error("File isn't .ber file\n");
	line = get_next_line(fd);
	g->width = ft_strlenn(line) - 1;
	g->height = 0;
	g->walk_count = 0;
	g->str_line = ft_strdup(line);
	free(line);
	while (line)
	{
		g->height++;
		line = get_next_line(fd);
		if (line)
		{
			g->str_line = ft_strjoinn(g->str_line, line);
		}
	}
	close(fd);
}
