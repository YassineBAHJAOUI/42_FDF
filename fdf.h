/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:10:21 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/05/23 16:08:34 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <unistd.h>
# include <errno.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <fcntl.h>
# include <math.h>
# include "get_next_line.h"
# include "lib-ft/libft.h"
# include "mlx/mlx.h"

typedef struct s_data
{
	void	*mlx;
	void	*win;
	int		w;
	int		h;
	void	*img;
	char	*add;
	int		bpp;
	int		ln;
	int		en;
	double	rx;
	double	ry;
	double	rz;
	int		sx;
	int		sy;
	int		zoom;
	int		xup;
	int		yup;
	int		***coord;
	int		nz;
	int		nc;
	double	dx;
	double	dy;
}	t_data;

typedef struct s_pars
{
	char	*line;
	int		len;
	int		x;
	int		***coords;
	int		i;
}	t_pars;

typedef struct s_point
{
	double	x;
	double	y;
	double	z;
	int		c;
}	t_point;

typedef struct s_fdf
{
	int		y;
	int		x;
	t_point	*p1;
	t_point	*p2;
	t_point	*p3;
}	t_fdf;

int	ft_exit(void);
void	ft_write_in_mlx(t_data *mlx);
int		filelen(int fd);
void	my_mlx_pixel_put(t_data *data, int x, int y, int color);
void	update(t_point *p, t_data *ptr);
void	fdf(int ***coord, t_data *data);
t_point	rot(t_point p, t_data *ptr);
t_point	iso(t_point p, t_data *ptr);
int		***parsing(int fd, int size, int *len);
void	draw_line_(t_data *data, t_point p1, t_point p2);
int		hextodec(char *str);

#endif
