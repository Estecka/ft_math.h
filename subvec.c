/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subvec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 15:42:21 by abaur             #+#    #+#             */
/*   Updated: 2020/01/31 15:51:55 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
** Computes the vector which goes from one point to the other.
** @param const t_v3 *fro The source point.
** @param const t_v3 *to  The destination point.
** @return union u_v3 to minus from
*/

extern union u_v3	subvec3(const t_v3 *fro, const t_v3 *to)
{
	return ((union u_v3){
		.vec3 = {
			.x = to->x - fro->x,
			.y = to->y - fro->y,
			.z = to->z - fro->z,
		}
	});
}

/*
** Computes the vector which goes from one point to the other.
** @param const t_v2 *fro The source point.
** @param const t_v2 *to  The destination point.
** @return union u_v2 to minus from
*/

extern union u_v2	subvec2(const t_v2 *fro, const t_v2 *to)
{
	return ((union u_v2){
		.vec2 = {
			.x = to->x - fro->x,
			.y = to->y - fro->y,
		}
	});
}
