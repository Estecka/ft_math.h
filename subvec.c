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
** @param const t_v3 fro The source point.
** @param const t_v3 to  The destination point.
** @return union u_v3 to minus from
*/

extern union u_v3	subvec3(const t_v3 fro, const t_v3 to)
{
	return ((union u_v3){
		.vec3 = {
			.x = to[0] - fro[0],
			.y = to[1] - fro[1],
			.z = to[2] - fro[2],
		}
	});
}

/*
** Computes the vector which goes from one point to the other.
** @param const t_v2 fro The source point.
** @param const t_v2 to  The destination point.
** @return union u_v2 to minus from
*/

extern union u_v2	subvec2(const t_v2 fro, const t_v2 to)
{
	return ((union u_v2){
		.vec2 = {
			.x = to[0] - fro[0],
			.y = to[1] - fro[1],
		}
	});
}
