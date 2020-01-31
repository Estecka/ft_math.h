/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crossp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 14:03:12 by abaur             #+#    #+#             */
/*   Updated: 2020/01/31 14:53:31 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
** Computes the magnitude of the cross product of two 2D vectors.
** This is faster than computing the full cross-product.
** @param t_v2 i The first vector.
** @param t_v2 j The second vector.
** @return float The magnitude of their cross-product.
*/

extern float		crossp2(t_v2 i, t_v2 j)
{
	return ((i[0] * j[1]) - (i[1] * j[0]));
}

/*
** Computes the cross-product of two 3D vectors.
** @param t_v3 i The first vector.
** @param t_v3 j The second vector.
** @return struct s_v3 Their cross-product
*/

extern struct s_v3	crossp3(t_v3 i, t_v3 j)
{
	return ((struct s_v3){
		.x = (i[1] * j[2]) - (i[2] * j[1]),
		.y = (i[2] * j[0]) - (i[0] * j[2]),
		.z = (i[0] * j[1]) - (i[1] * j[0]),
		});
}
