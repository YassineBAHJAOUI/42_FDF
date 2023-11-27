/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_mlx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:07:51 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/05/23 15:20:07 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_write_in_mlx(t_data *mlx)
{
	mlx_string_put(mlx->mlx, mlx->win, 50, 20, 0x00DCDCFF, "HOW TO USE:");
	mlx_string_put(mlx->mlx, mlx->win, 20, 60, 0x00DCDCFF, "ZOOM: - , +");
	mlx_string_put(mlx->mlx, mlx->win, 20, 80, 0x00DCDCFF, "R_x: haut / bas");
	mlx_string_put(mlx->mlx, mlx->win, 20, 100, 0x00DCDCFF, "R_y: < / >");
	mlx_string_put(mlx->mlx, mlx->win, 20, 120, 0x00DCDCFF, "R_z: R / T");
	mlx_string_put(mlx->mlx, mlx->win, 20, 140, 0x00DCDCFF, "RESET: 0");
	mlx_string_put(mlx->mlx, mlx->win, 20, 160, 0x00DCDCFF, "CHANGE COLOR: C");
	mlx_string_put(mlx->mlx, mlx->win, 20, 180, 0x00DCDCFF, "MOVE:A/S/W/D");
	mlx_string_put(mlx->mlx, mlx->win, 20, 200, 0x00DCDCFF, "PARALELLS: SPACE");
	mlx_string_put(mlx->mlx, mlx->win, 20, 220, 0x00DCDCFF, "DEEP : X / Z");
}

int	ft_exit(void)
{
	exit(0);
}
