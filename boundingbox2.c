/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boundingbox2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 15:17:27 by abaur             #+#    #+#             */
/*   Updated: 2020/02/03 11:33:43 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include "boundingbox.h"

/*
** Checks whether two bounding boxes intersect;
** @param t_bbox* b1, b2 The boxes to intersect.
** @return bool
** 	true  The boxes do intersect.
** 	false The boxes don't intersect, or are on the edge of each other.
*/

extern short	bbinter(t_bbox *b1, t_bbox *b2)
{
	if (b1->min.vec3.x <= b2->min.vec3.x && b1->max.vec3.x <= b2->min.vec3.x)
		return (0);
	if (b1->min.vec3.x >= b2->max.vec3.x && b1->max.vec3.x >= b2->max.vec3.x)
		return (0);
	if (b1->min.vec3.y <= b2->min.vec3.y && b1->max.vec3.y <= b2->min.vec3.y)
		return (0);
	if (b1->min.vec3.y >= b2->max.vec3.y && b1->max.vec3.y >= b2->max.vec3.y)
		return (0);
	if (b1->min.vec3.z <= b2->min.vec3.z && b1->max.vec3.z <= b2->min.vec3.z)
		return (0);
	if (b1->min.vec3.z >= b2->max.vec3.z && b1->max.vec3.z >= b2->max.vec3.z)
		return (0);
	return (1);
}

/*
** Computes the interection of two bounding boxes.
** @param t_bbox* this Outputs the resulting bounding box.
** @param t_bbox* b1,b2 The bounding boxes to intersect.
*/

void	bbclip(t_bbox *this, t_bbox *b1, t_bbox *b2)
{
	this->min.vec3.x = (b1->min.vec3.x > b2->min.vec3.x) ?
		b1->min.vec3.x :
		b2->min.vec3.x;
	this->min.vec3.y = (b1->min.vec3.y > b2->min.vec3.y) ?
		b1->min.vec3.y :
		b2->min.vec3.y;
	this->min.vec3.z = (b1->min.vec3.z > b2->min.vec3.z) ?
		b1->min.vec3.z :
		b2->min.vec3.z;
	this->max.vec3.x = (b1->max.vec3.x < b2->max.vec3.x) ?
		b1->max.vec3.x :
		b2->max.vec3.x;
	this->max.vec3.y = (b1->max.vec3.y < b2->max.vec3.y) ?
		b1->max.vec3.y :
		b2->max.vec3.y;
	this->max.vec3.z = (b1->max.vec3.z < b2->max.vec3.z) ?
		b1->max.vec3.z :
		b2->max.vec3.z;
}

/*
** Checks whether the given bounding box can contain any point.
** @param t_bbox* this The bounding box to check.
** @return bool
** 	true  The bounding box ranges are strictly positive.
**  false The bounding box is singular, or has at least one negative range.
*/

short	bbisvalid(struct s_bbox *this)
{
	return (
		this->max.vec3.x > this->min.vec3.x
		&& this->max.vec3.y > this->min.vec3.y
		&& this->max.vec3.z > this->min.vec3.z
	);
}
