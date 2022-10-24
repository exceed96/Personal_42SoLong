/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:43:09 by sangyeki          #+#    #+#             */
/*   Updated: 2022/05/21 18:35:46 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "mlx/mlx.h"
# include "utils/get_next_line.h"
# include <stdio.h>
# include <fcntl.h>

typedef struct game_image{
	void	*he_l;
	void	*he_r;
	void	*key;
	void	*wall;
	void	*exit;
	void	*floor;
}	t_game_ig;

typedef struct game_contents{
	void		*mlx;
	void		*win;
	int			width;
	int			height;
	char		*str_line;
	int			walk_count;
	t_game_ig	g_img;
	int			col_key;
	int			col_count;
}	t_game_ct;

# define X_EVENT_KEY_PRESS		2
# define X_EVENT_KEY_EXIT		17
# define KEY_ESC				53
# define KEY_W					13
# define KEY_A					0
# define KEY_S					1
# define KEY_D					2

int			main(int argc, char **argv);

void		ft_game_init(t_game_ct *g, char *map);
void		ft_map_char_check(t_game_ct *g);
void		ft_map_error_check(t_game_ct *g);
void		ft_map_wall_check(t_game_ct *g);
void		ft_map_check(t_game_ct *g);
t_game_ig	img_init(void *mlx);
void		ft_draw_image(t_game_ct *g, int w, int h);
void		ft_image_setting(t_game_ct *g);
void		ft_map_read(char *filename, t_game_ct *g);

int			ft_strlenn(char *str);
char		*ft_strjoinn(char *s1, char *s2);
char		*ft_strdup(char *s);
void		ft_putstr(char *s);
int			ft_strlcpy(char *dst, char *src, int len);
size_t		ft_strlcat(char *dst, char *src, size_t detsize);
char		*ft_strrchr(char *s, int c);
int			ft_strcmp(char *s1, char *s2);

void		ft_print_error(char *str);
void		ft_print_clear(char *str, t_game_ct *g);
void		ft_print_fail(char *str);
int			ft_print_esc(t_game_ct *g);

int			ft_key_press(int keycode, t_game_ct *g);
void		ft_move_w(t_game_ct *g);
void		ft_move_a(t_game_ct *g);
void		ft_move_s(t_game_ct *g);
void		ft_move_d(t_game_ct *g);
#endif
