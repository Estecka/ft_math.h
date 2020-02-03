/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boundingbox2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 15:17:27 by abaur             #+#    #+#             */
/*   Updated: 2020/01/31 16:07:57 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include "boundingbox.h"

/*
** Checks whether two bounding boxes intersect;
** @param t_bbox* b1, b2 The boxes to check.
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
