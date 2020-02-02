/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boundingbox.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 15:17:27 by abaur             #+#    #+#             */
/*   Updated: 2020/01/31 16:07:57 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"
#include "vector.h"
#include "boundingbox.h"

/*
** Initializes a bounding box with a point.
** @param t_bbox* this The bounding box to initialize.
** @param t_v3 point The point to use as initializer.
*/

extern void bbinit(t_bbox *this, t_v3 point)
{
	this->min = *(union u_v3*)point;
	this->max = *(union u_v3*)point;
	return (this);
}

/*
** Expands a bounding box to include a given point.
** @param t_bbox* this The bounding box to recompute.
** @param t_v3 point The point to include.
*/

extern void bbpoint(t_bbox *this, t_v3 point)
{
	if (point[0] < this->min.x)
		this->min.x = point[0];
	if (point[1] < this->min.y)
		this->min.y = point[1];
	if (point[2] < this->min.z)
		this->min.z = point[2];
	if (point[0] > this->max.x)
		this->max.x = point[0];
	if (point[1] > this->max.y)
		this->max.y = point[1];
	if (point[2] > this->max.z)
		this->max.z = point[2];
}

/*
** Creates a bounding box around a given triangle.
** @param t_bbox* this The bounding box to initialize.
** @param t_tri tri The triangle to bind.
*/

void	bbtri(t_bbox *this, t_tri tri)
{
	bbinit(this, tri[0]);
	bbpoint(this, tri[1]);
	bbpoint(this, tri[2]);
}

/*
** Creates a bounding box around a given quadrilater.
** @param t_bbox* this The bounding box to initialize.
** @param t_quad quad The quadrilater to bind.
*/

void	bbquad(t_bbox *this, t_quad quad)
{
	bbinit(this, quad[0]);
	bbpoint(this, quad[1]);
	bbpoint(this, quad[2]);
	bbpoint(this, quad[3]);
}
