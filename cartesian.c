/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cartesian.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 12:26:03 by abaur             #+#    #+#             */
/*   Updated: 2020/02/03 11:46:53 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

/*
** Computes the cartesian coordinates of a homogeneous vector.
** @param const t_v4 *v The homegenous vector.
** @return union u_v3 The cartesian vector.
*/

union u_v3	cartesian(const t_v4 *v)
{
	union u_v3	r;
	float		w;

	if (v->w != 1)
	{
		w = 1 / v->w;
		r.vec3.x = v->x * w;
		r.vec3.y = v->y * w;
		r.vec3.z = v->z * w;
		return (r);
	}
	else
		return (*(union u_v3*)v);
}

/*
** Computes the homogeneous coordinates of a cartesian vector.
** @param const t_v3 *v The cartesian point
** @param const t_mx4 m The projection matrix that was used to obtain the point.
** 	This is assumed to be a valid perspective matrix :
** 	[m00   0 m20 m30]
** 	[  0 m11 m21 m31]
** 	[  0   0 m22 m32]
** 	[  0   0 m23   0]
** @return union u_v4 The homogeneous vector.
*/

union u_v4	homegeneous(const t_v3 *v, const t_mx4 m)
{
	union u_v4	r;

	r.vec4.w = -m[3][2] * ((m[2][2] * m[2][3]) - v->z);
	r.vec4.x = v->x * r.vec4.w;
	r.vec4.y = v->y * r.vec4.w;
	r.vec4.z = v->z * r.vec4.w;
	return (r);
}
