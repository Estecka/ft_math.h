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
** @param const t_v2 *p The point to check against the triangle.
** @param const t_tri tri The points of the triangle to check against
** @return bool
** 	true  The point is within the triangle.
** 	false The point is outside or on the edge of the triangle.
*/

extern short	tricontain(const t_v2 *p, const t_tri tri)
{
	struct s_v2 i;
	struct s_v2 j;

	subvec2(&i, (t_v2*)&tri[0], (t_v2*)&tri[1]);
	subvec2(&j, (t_v2*)&tri[0], p);
	if (crossp2(&i, &j) <= 0)
		return (0);
	subvec2(&i, (t_v2*)&tri[1], (t_v2*)&tri[2]);
	subvec2(&j, (t_v2*)&tri[1], p);
	if (crossp2(&i, &j) <= 0)
		return (0);
	subvec2(&i, (t_v2*)&tri[2], (t_v2*)&tri[0]);
	subvec2(&j, (t_v2*)&tri[2], p);
	if (crossp2(&i, &j) <= 0)
		return (0);
	return (1);
}

/*
** Checks wether a 2D quadrilater contains a given point.
** @param const t_v2 *p The point to check.
** @param const t_quad The quadrilater to check against.
** @return bool
** 	true  The point lays within the figure.
** 	false The point is outside or on the edge of the figure.
*/

extern short	quadcontain(const t_v2 *p, const t_quad quad)
{
	struct s_v2 i;
	struct s_v2 j;

	subvec2(&i, (t_v2*)&quad[0], (t_v2*)&quad[1]);
	subvec2(&j, (t_v2*)&quad[0], p);
	if (crossp2(&i, &j) <= 0)
		return (0);
	subvec2(&i, (t_v2*)&quad[1], (t_v2*)&quad[2]);
	subvec2(&j, (t_v2*)&quad[1], p);
	if (crossp2(&i, &j) <= 0)
		return (0);
	subvec2(&i, (t_v2*)&quad[2], (t_v2*)&quad[3]);
	subvec2(&j, (t_v2*)&quad[2], p);
	if (crossp2(&i, &j) <= 0)
		return (0);
	subvec2(&i, (t_v2*)&quad[3], (t_v2*)&quad[0]);
	subvec2(&j, (t_v2*)&quad[3], p);
	if (crossp2(&i, &j) <= 0)
		return (0);
	return (1);
}
