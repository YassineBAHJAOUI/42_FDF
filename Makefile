# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/23 15:04:50 by ybahjaou          #+#    #+#              #
#    Updated: 2023/05/23 15:09:55 by ybahjaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

CC = cc

CFLAGS = -Wall -Wextra -Werror -Ofast

SRCS = get_next_line.c get_next_line_utils.c fdf.c ft_write_mlx.c draw.c hextodec.c my_putpixel.c rotation.c parsing.c main.c isometric.c 

MLX_PATH = mlx/

OBJS = $(SRCS:.c=.o)

all:$(NAME)

lib-ft/libft.a:
	make bonus -C lib-ft

%.o:%.c fdf.h get_next_line.h lib-ft/libft.h 
	$(CC) $(CFLAGS) -c $<

$(NAME):$(OBJS) lib-ft/libft.a
	$(CC) $(CFLAGS) $(OBJS) -L$(MLX_PATH) -lmlx -L/usr/lib -lXext -lX11 -lm lib-ft/libft.a -o $(NAME) lib-ft/libft.a

clean:
	rm -f $(OBJS) $(BONUSOBJS)
	make clean -C lib-ft

fclean: clean 
	rm -f $(NAME)
	make fclean -C lib-ft

re: fclean all 

.PHONY: clean fclean re all
