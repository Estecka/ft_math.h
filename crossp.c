/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crossp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 14:03:12 by abaur             #+#    #+#             */
/*   Updated: 2020/01/31 15:12:03 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
** Computes the magnitude of the cross product of two 2D vectors.
** This is faster than computing the full cross-product.
** @param const t_v2 *i The first vector.
** @param const t_v2 *j The second vector.
** @return float The magnitude of their cross-product.
*/

extern float		crossp2(const t_v2 *i, const t_v2 *j)
{
	return ((i->x * j->y) - (i->y * j->x));
}

/*
** Computes the cross-product of two 3D vectors.
** @param const t_v3 *i The first vector.
** @param const t_v3 *j The second vector.
** @return struct s_v3 Their cross-product
*/

extern union u_v3	crossp3(const t_v3 *i, const t_v3 *j)
{
	return ((union u_v3){
		.vec3 = {
			.x = (i->y * j->z) - (i->z * j->y),
			.y = (i->z * j->x) - (i->x * j->z),
			.z = (i->x * j->y) - (i->y * j->x),
		}
	});
}

/*
** Computes the normale of a figure.
** @param const t_v3 figure. May be a t_quad or t_tri.
** @return union u_v3 The normale.
*/

extern union u_v3	normale(const t_v3 *figure)
{
	struct s_v3 i;
	struct s_v3 j;

	subvec3(&i, &figure[1], &figure[2]);
	subvec3(&j, &figure[1], &figure[0]);
	return (crossp3(&i, &j));
}
