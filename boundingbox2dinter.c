/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boundingbox2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 15:17:27 by abaur             #+#    #+#             */
/*   Updated: 2020/02/03 11:50:49 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include "boundingbox.h"

/*
** Checks whether two bounding boxes intersect;
** @param const t_bbox2* b1, b2 The boxes to intersect.
** @return bool
** 	true  The boxes do intersect.
** 	false The boxes don't intersect, or are on the edge of each other.
*/

extern short	bb2inter(const t_bbox2 *b1, const t_bbox2 *b2)
{
	if (b1->min.x <= b2->min.x && b1->max.x <= b2->min.x)
		return (0);
	if (b1->min.x >= b2->max.x && b1->max.x >= b2->max.x)
		return (0);
	if (b1->min.y <= b2->min.y && b1->max.y <= b2->min.y)
		return (0);
	if (b1->min.y >= b2->max.y && b1->max.y >= b2->max.y)
		return (0);
	return (1);
}

/*
** Computes the interection of two bounding boxes.
** @param t_bbox2* this Outputs the resulting bounding box.
** @param const t_bbox2* b1,b2 The bounding boxes to intersect.
*/

extern void		bb2clip(t_bbox2 *this, const t_bbox2 *b1, const t_bbox2 *b2)
{
	this->min.x = (b1->min.x > b2->min.x) ?
		b1->min.x :
		b2->min.x;
	this->min.y = (b1->min.y > b2->min.y) ?
		b1->min.y :
		b2->min.y;
	this->max.x = (b1->max.x < b2->max.x) ?
		b1->max.x :
		b2->max.x;
	this->max.y = (b1->max.y < b2->max.y) ?
		b1->max.y :
		b2->max.y;
}

/*
** Checks whether the given bounding box can contain any point.
** @param t_bbox2* this The bounding box to check.
** @return bool
** 	true  The bounding box ranges are null or positive.
**  false The bounding box has at least one negative range.
*/

extern short	bb2isvalid(struct s_bbox2 *this)
{
	return (
		this->max.x >= this->min.x
		&& this->max.y >= this->min.y
);
}
