/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:05:09 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/05/23 16:07:20 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	init_data(t_data *data, int j)
{
	data->zoom = 0;
	data->w = 1500;
	data->h = 1000;
	data->sx = 0;
	data->sy = 0;
	data->nz = 1;
	data->nc = 0;
	data->rz = 0;
	data->rx = 0;
	data->ry = 0;
	if (j == 1)
	{
		data->rz = 0.523599;
		data->rx = 0.523599;
		data->ry = -0.523599;
	}
}

int	key_press(int key, t_data *p)
{
	if (key == 65307)
		exit(0);
	else if (key == 32)
		init_data(p, 0);
	else if (key == 48)
		init_data(p, 1);
	if (key == 114)
		p->rz += 0.05;
	else if (key == 116)
		p->rz -= 0.05;
	else if (key == 65362)
		p->rx += 0.05;
	else if (key == 65364)
		p->rx -= 0.05;
	else if (key == 65363)
		p->ry += 0.05;
	else if (key == 65361)
		p->ry -= 0.05;
	mlx_destroy_image(p->mlx, p->img);
	p->img = mlx_new_image(p->mlx, 1500, 1000);
	p->add = mlx_get_data_addr(p->img, &p->bpp, &p->ln, &p->en);
	fdf(p->coord, p);
	mlx_put_image_to_window(p->mlx, p->win, p->img, 0, 0);
	return (0);
}

int	keypress2(int key, t_data *p)
{
	if (key == 45)
		p->zoom -= 1;
	else if (key == 61)
		p->zoom += 1;
	else if (key == 120)
		p->nz += 1;
	else if (key == 122)
		p->nz -= 1;
	else if (key == 99)
		p->nc += 1;
	key_press(key, p);
	mlx_destroy_image(p->mlx, p->img);
	p->img = mlx_new_image(p->mlx, 1500, 1000);
	p->add = mlx_get_data_addr(p->img, &p->bpp, &p->ln, &p->en);
	fdf(p->coord, p);
	mlx_put_image_to_window(p->mlx, p->win, p->img, 0, 0);
	ft_write_in_mlx(p);
	return (0);
}

int	keypress3(int key, t_data *p)
{
	if (key == 97)
		p->sx -= 50;
	else if (key == 115)
		p->sy += 50;
	else if (key == 119)
		p->sy -= 50;
	else if (key == 100)
		p->sx += 50;
	keypress2(key, p);
	mlx_destroy_image(p->mlx, p->img);
	p->img = mlx_new_image(p->mlx, 1500, 1000);
	p->add = mlx_get_data_addr(p->img, &p->bpp, &p->ln, &p->en);
	fdf(p->coord, p);
	mlx_put_image_to_window(p->mlx, p->win, p->img, 0, 0);
	ft_write_in_mlx(p);
	return (0);
}

int	main(int ac, char **av)
{
	t_data	data;
	int		fd;

	if (ac == 2)
	{
		data.mlx = mlx_init();
		init_data(&data, 1);
		data.win = mlx_new_window(data.mlx, data.w, data.h, "fdf");
		fd = open(av[1], O_RDONLY);
		if (fd < 0)
			return (write(1, "file doesn't exist", 18));
		data.yup = filelen(fd);
		fd = open(av[1], O_RDONLY);
		data.coord = parsing(fd, data.yup, &data.xup);
		if (!data.coord)
			return (write(1, "wrong map", 9));
		data.img = mlx_new_image(data.mlx, 1500, 1000);
		data.add = mlx_get_data_addr(data.img, &data.bpp, &data.ln, &data.en);
		fdf(data.coord, &data);
		mlx_put_image_to_window(data.mlx, data.win, data.img, 0, 0);
		mlx_hook(data.win, 2, 1L << 0, keypress3, &data);
		mlx_hook(data.win, 17, 0, ft_exit, &data);
		mlx_loop(data.mlx);
	}
}
