/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plane.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 12:26:03 by abaur             #+#    #+#             */
/*   Updated: 2020/01/31 12:43:40 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** Computes the equation of a plane.
** @param const t_v3 *n The normale of the plane.
** @param const t_v3 *p Any point on the plane.
*/

extern union u_v4	planeeq(const t_v3 *n, const t_v3 *p)
{
	union u_v4 eq;

	eq.vec4.x = n->x;
	eq.vec4.y = n->y;
	eq.vec4.z = n->z;
	eq.vec4.w = (n->x * p->x) + (n->y * p->y) + (n->z * p->z);
	return (eq);
}

/*
** Computes the missing coordinate of a point on the plane.
** @param const t_v4 *eq The plane's equation.
** @param const t_v3 *p The point to complete.
*/

extern float		planex(const t_v4 *eq, const t_v3 *p)
{
	return ((eq->w - (eq->y * p->y) - (eq->z * p->z)) / eq->x);
}

extern float		planey(const t_v4 *eq, const t_v3 *p)
{
	return (eq->w - (eq->x * p->x) - (eq->z * p->z)) / eq->y;
}

extern float		planez(const t_v4 *eq, const t_v3 *p)
{
	return (eq->w - (eq->x * p->x) - (eq->y * p->y)) / eq->z;
}
