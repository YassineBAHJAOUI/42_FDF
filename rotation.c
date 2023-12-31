/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:50:39 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/05/23 15:50:53 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fdf.h"

t_point	rot(t_point p, t_data *ptr)
{
	t_point	p1;

	p1 = p;
	p1.x = p.x;
	p1.y = p.y * cos(ptr->rx) - (p.z * sin(ptr->rx));
	p1.z = p.y * sin(ptr->rx) + p.z * cos(ptr->rx);
	p = p1;
	p.x = p1.x * cos(ptr->ry) + p1.z * sin(ptr->ry);
	p.y = p1.y;
	p.z = p1.x * -sin(ptr->ry) + p1.z * cos(ptr->ry);
	p1 = p;
	p1.x = p.x * cos(ptr->rz) + p.y * -sin(ptr->rz);
	p1.y = p.x * sin(ptr->rz) + p.y * cos(ptr->rz);
	p1.z = p.z;
	p.y = p1.y + ptr->sy;
	p.x = p1.x + ptr->sx;
	return (p);
}
