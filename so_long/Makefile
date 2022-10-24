# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/13 17:36:06 by sangyeki          #+#    #+#              #
#    Updated: 2022/05/21 18:01:11 by sangyeki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= so_long
NAME_BONUS		= so_long_bonus

SOURCES			= so_long.c \
			      sources/ft_game_init.c \
			      sources/ft_map_read.c \
			      sources/ft_map_error_check.c \
			      sources/ft_image_setting.c \
			      sources/ft_key.c \
				  sources/ft_print_message.c \
			      utils/ft_strdup.c \
			      utils/ft_strlcpy.c \
			      utils/ft_strlcat.c \
			      utils/ft_strlenn.c \
			      utils/ft_strjoinn.c \
				  utils/ft_strrchr.c \
				  utils/ft_strcmp.c \
			      utils/get_next_line.c \
			      utils/get_next_line_utils.c \

SOURCES_BONUS	= so_long_bonus.c \
			  	  sources_bonus/ft_game_init_bonus.c \
			      sources_bonus/ft_map_read_bonus.c \
			      sources_bonus/ft_map_error_check_bonus.c \
			      sources_bonus/ft_image_setting_bonus.c \
			      sources_bonus/ft_key_bonus.c \
			      sources_bonus/ft_print_message_bonus.c \
			      utils_bonus/ft_strdup_bonus.c \
			      utils_bonus/ft_strlcpy_bonus.c \
			      utils_bonus/ft_strlcat_bonus.c \
			      utils_bonus/ft_strlenn_bonus.c \
			      utils_bonus/ft_strjoinn_bonus.c \
				  utils_bonus/ft_strcmp_bonus.c \
				  utils_bonus/ft_itoa_bonus.c \
				  utils_bonus/ft_strrchr_bonus.c \
			      utils_bonus/get_next_line_bonus.c \
			      utils_bonus/get_next_line_utils_bonus.c \

OBJECTS			= $(SOURCES:%.c=%.o)
OBJECTS_BONUS	= $(SOURCES_BONUS:%.c=%.o)
FLAGS			= -Wall -Wextra -Werror

all				:	$(NAME)

bonus 			:	$(NAME_BONUS)

$(NAME)			:	$(OBJECTS)
	cc -o $(NAME) $(OBJECTS) -L./mlx -lmlx -framework OpenGL -framework AppKit
$(NAME_BONUS)	:	$(OBJECTS_BONUS)
	cc -o $(NAME_BONUS) $(OBJECTS_BONUS) -L./mlx -lmlx -framework OpenGL -framework Appkit

%.o				:	%.c
	cc $(FLAGS) -c $^ -I./ -o $@

clean			:
	rm -f $(OBJECTS) $(OBJECTS_BONUS)

norm			:
	norm $(SOURCES) $(SOURCES_BONUS) 

fclean			:	clean
	rm -f $(NAME) $(NAME_BONUS)

re				:	fclean all

.PHONY			:	all clean fclean re bonus
