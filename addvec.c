/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addvec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 15:42:21 by abaur             #+#    #+#             */
/*   Updated: 2020/01/31 15:51:55 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
** Computes the sum of two vectors.
** @param t_v v1, v2 The vectors to add together.
** @return union u_v3 the sum of the vectors.
*/

extern union u_v2	addvec2(const t_v2 *v1, const t_v2 *v2)
{
	return ((union u_v2){
		.vec2 = {
			.x = v2->x + v1->x,
			.y = v2->y + v1->y,
		}
	});
}

extern union u_v3	addvec3(const t_v3 *v1, const t_v3 *v2)
{
	return ((union u_v3){
		.vec3 = {
			.x = v2->x + v1->x,
			.y = v2->y + v1->y,
			.z = v2->z + v1->z,
		}
	});
}
