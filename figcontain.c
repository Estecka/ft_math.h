/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   figcontain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 15:17:27 by abaur             #+#    #+#             */
/*   Updated: 2020/01/31 16:07:57 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
** Checks wether a 2D triangle contains a given point.
** The points of the triangle should be provided in counter-clockwise order
** @param t_v2 p The point to check against the triangle.
** @param t_v2 a,b,c The points of the triangle, provided in counter-clockwise
** order.
** @return bool
** 	true  The point is within the triangle.
** 	false The point is outside or on the edge of the triangle.
*/

extern short	tricontain(t_v2 p, t_v2 a, t_v2 b, t_v2 c)
{
	union u_v2 i;
	union u_v2 j;

	i = subvec2(a, b);
	j = subvec2(a, p);
	if (crossp2(i.array, j.array) <= 0)
		return (0);
	i = subvec2(b, c);
	j = subvec2(b, p);
	if (crossp2(i.array, j.array) <= 0)
		return (0);
	i = subvec2(c, a);
	j = subvec2(c, p);
	if (crossp2(i.array, j.array) <= 0)
		return (0);
	return (1);
}

/*
** Checks wether a 2D quadrilater contains a given point.
** The points of the quadrilater should be provided in counter-clockwise order
** @param t_v2 p The point to check against the triangle.
** @param t_v2 a,b,c The points of the triangle, provided in counter-clockwise
** order.
** @return bool
** 	true  The point is within the triangle.
** 	false The point is outside or on the edge of the triangle.
*/

extern short	quadcontain(t_v2 p, t_v2 a, t_v2 b, t_v2 c, t_v2 d)
{
	union u_v2 i;
	union u_v2 j;

	i = subvec2(a, b);
	j = subvec2(a, p);
	if (crossp2(i.array, j.array) <= 0)
		return (0);
	i = subvec2(b, d);
	j = subvec2(b, p);
	if (crossp2(i.array, j.array) <= 0)
		return (0);
	i = subvec2(c, a);
	j = subvec2(c, p);
	if (crossp2(i.array, j.array) <= 0)
		return (0);
	i = subvec2(d, c);
	j = subvec2(d, p);
	if (crossp2(i.array, j.array) <= 0)
		return (0);
	return (1);
}
