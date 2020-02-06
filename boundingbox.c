/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boundingbox.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 15:17:27 by abaur             #+#    #+#             */
/*   Updated: 2020/02/03 11:50:03 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"
#include "vector.h"
#include "boundingbox.h"

/*
** Initializes a bounding box with a point.
** @param t_bbox* this The bounding box to initialize.
** @param const t_v3 *point The point to use as initializer.
*/

extern void		bbinit(t_bbox *this, const t_v3 *point)
{
	this->min = *point;
	this->max = *point;
}

/*
** Expands a bounding box to include a given point.
** @param t_bbox* this The bounding box to recompute.
** @param const t_v3 *point The point to include.
*/

extern void		bbpoint(t_bbox *this, const t_v3 *point)
{
	if (point->x < this->min.x)
		this->min.x = point->x;
	if (point->y < this->min.y)
		this->min.y = point->y;
	if (point->z < this->min.z)
		this->min.z = point->z;
	if (point->x > this->max.x)
		this->max.x = point->x;
	if (point->y > this->max.y)
		this->max.y = point->y;
	if (point->z > this->max.z)
		this->max.z = point->z;
}

/*
** Creates a bounding box around a given triangle.
** @param t_bbox* this The bounding box to initialize.
** @param t_tri tri The triangle to bind.
*/

extern void		bbtri(t_bbox *this, t_tri tri)
{
	bbinit(this, &tri[0]);
	bbpoint(this, &tri[1]);
	bbpoint(this, &tri[2]);
}

/*
** Creates a bounding box around a given quadrilater.
** @param t_bbox* this The bounding box to initialize.
** @param t_quad quad The quadrilater to bind.
*/

extern void		bbquad(t_bbox *this, t_quad quad)
{
	bbinit(this, &quad[0]);
	bbpoint(this, &quad[1]);
	bbpoint(this, &quad[2]);
	bbpoint(this, &quad[3]);
}

/*
** Checks whether a given point is contained in a bounding box.
** @param t_bbox this The containing bounding box.
** @param const t_v3 this The point to check.
** @param bool
** 	true  The point is inside the bounding box.
** 	false The point is outside or on the edges of the bounding box.
*/

extern short	bbcontain(t_bbox *this, const t_v3 *p)
{
	return (
		this->min.x < p->x && p->x < this->max.x
		&& this->min.y < p->y && p->y < this->max.y
		&& this->min.z < p->z && p->z < this->max.z
);
}
