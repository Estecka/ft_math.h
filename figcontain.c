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
#include "figure.h"

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

extern short	tricontain(t_v2 p, t_tri tri)
{
	union u_v2 i;
	union u_v2 j;

	i = subvec2(tri[0].array, tri[1].array);
	j = subvec2(tri[0].array, p);
	if (crossp2(i.array, j.array) <= 0)
		return (0);
	i = subvec2(tri[1].array, tri[2].array);
	j = subvec2(tri[1].array, p);
	if (crossp2(i.array, j.array) <= 0)
		return (0);
	i = subvec2(tri[2].array, tri[0].array);
	j = subvec2(tri[2].array, p);
	if (crossp2(i.array, j.array) <= 0)
		return (0);
	return (1);
}

/*
** Checks wether a 2D quadrilater contains a given point.
** @param t_v2 p The point to check.
** @param t_quad The quadrilater to check against.
** @return bool
** 	true  The point lays within the figure.
** 	false The point is outside or on the edge of the figure.
*/

extern short	quadcontain(t_v2 p, t_quad quad)
{
	union u_v2 i;
	union u_v2 j;

	i = subvec2(quad[0].array, quad[1].array);
	j = subvec2(quad[0].array, p);
	if (crossp2(i.array, j.array) <= 0)
		return (0);
	i = subvec2(quad[1].array, quad[2].array);
	j = subvec2(quad[1].array, p);
	if (crossp2(i.array, j.array) <= 0)
		return (0);
	i = subvec2(quad[2].array, quad[3].array);
	j = subvec2(quad[2].array, p);
	if (crossp2(i.array, j.array) <= 0)
		return (0);
	i = subvec2(quad[3].array, quad[0].array);
	j = subvec2(quad[3].array, p);
	if (crossp2(i.array, j.array) <= 0)
		return (0);
	return (1);
}
