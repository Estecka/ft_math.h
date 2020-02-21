/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boundingbox2d.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 15:17:27 by abaur             #+#    #+#             */
/*   Updated: 2020/02/03 11:50:03 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include "boundingbox.h"
#include "figure.h"

/*
** Initializes a bounding box with a point.
** @param t_bbox2* this The bounding box to initialize.
** @param const t_v2 *point The point to use as initializer.
*/

extern void		bb2init(t_bbox2 *this, const t_v2 *point)
{
	this->min = *point;
	this->max = *point;
}

/*
** Expands a bounding box to include a given point.
** @param t_bbox2* this The bounding box to recompute.
** @param const t_v2 *point The point to include.
*/

extern void		bb2expand(t_bbox2 *this, const t_v2 *point)
{
	if (point->x < this->min.x)
		this->min.x = point->x;
	if (point->y < this->min.y)
		this->min.y = point->y;
	if (point->x > this->max.x)
		this->max.x = point->x;
	if (point->y > this->max.y)
		this->max.y = point->y;
}

/*
** Creates a bounding box around a given segment
** @param t_bbox* this The bounding box to initialize.
** @param t_seg2 seg The triangle to bind.
*/

extern void		bb2seg(t_bbox2 *this, t_seg2 seg)
{
	bb2init(this, &seg[0]);
	bb2expand(this, &seg[1]);
}

/*
** Checks whether a given point is contained in a bounding box.
** @param t_bbox this The containing bounding box.
** @param const t_v2 this The point to check.
** @param bool
** 	true  The point is inside the bounding box.
** 	false The point is outside or on the edges of the bounding box.
*/

extern short	bb2contain(t_bbox2 *this, const t_v2 *p)
{
	return (
		this->min.x < p->x && p->x < this->max.x
		&& this->min.y < p->y && p->y < this->max.y
);
}
