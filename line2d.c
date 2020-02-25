/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line2d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:11:22 by abaur             #+#    #+#             */
/*   Updated: 2020/02/25 14:11:24 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** Computes the equation of a line.
** @param const t_v2 *n The normale of the line.
** @param const t_v2 *p Any point on the line.
*/

extern union u_v3	lineeq(const t_v2 *n, const t_v2 *p)
{
	union u_v3 eq;

	eq.vec3.x = n->x;
	eq.vec3.y = n->y;
	eq.vec3.z = (n->x * p->x) + (n->y * p->y);
	return (eq);
}

/*
** Computes the missing coordinate of a point on the line.
** @param const t_v3 *eq The line's equation.
** @param const t_v2 *p The point to complete.
** @return float	The missing coordinate.
*/

extern float		linex(const t_v3 *eq, const t_v2 *p)
{
	return ((eq->z - (eq->y * p->y)) / eq->x);
}

extern float		liney(const t_v3 *eq, const t_v2 *p)
{
	return (eq->z - (eq->x * p->x)) / eq->y;
}