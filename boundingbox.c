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
	if (point[0] < this->min.vec3.x)
		this->min.vec3.x = point[0];
	if (point[1] < this->min.vec3.y)
		this->min.vec3.y = point[1];
	if (point[2] < this->min.vec3.z)
		this->min.vec3.z = point[2];
	if (point[0] > this->max.vec3.x)
		this->max.vec3.x = point[0];
	if (point[1] > this->max.vec3.y)
		this->max.vec3.y = point[1];
	if (point[2] > this->max.vec3.z)
		this->max.vec3.z = point[2];
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

/*
** Checks whether a given point is contained in a bounding box.
** @param t_bbox this The containing bounding box.
** @param t_v3 this The point to check.
** @param bool
** 	true  The point is inside the bounding box.
** 	false The point is outside or on the edges of the bounding box.
*/

short	bbcontain(t_bbox *this, t_v3 p)
{
	return (
		this->min.vec3.x < p[0] && p[0] < this->max.vec3.x
		&& this->min.vec3.y < p[1] && p[1] < this->max.vec3.y
		&& this->min.vec3.z < p[2] && p[2] < this->max.vec3.z
	);
};
