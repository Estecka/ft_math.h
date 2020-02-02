/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cartesian.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 12:26:03 by abaur             #+#    #+#             */
/*   Updated: 2020/01/31 12:43:40 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

/*
** Computes the cartesian coordinates of a homogeneous vector.
** @param t_v4 v The homegenous vector.
** @return union u_v3 The cartesian vector.
*/

union u_v3	cartesian(t_v4 v)
{
	union u_v3 r;
	float w;

	if (v[3] != 1)
	{
		w = 1/v[3]
		r.vec3.x = v[0] * w;
		r.vec3.y = v[1] * w;
		r.vec3.z = v[2] * w;
	}
	else
		return (*(union u_v3*)v);
}

/*
** Computes the homogeneous coordinates of a cartesian vector.
** @param t_v3 v The cartesian point
** @param t_mx4 m The projection matrix that was used to obtain the point.
** 	This is assumed to be a valid perspective matrix :
** 	[m00   0 m20 m30]
** 	[  0 m11 m21 m31]
** 	[  0   0 m22 m32]
** 	[  0   0 m23   0]
** @return union u_v4 The homogeneous vector.
*/
union u_v4	homegeneous(t_v3 v, t_mx4 m)
{
	union u_v4 r;

	r.vec3 = *(struct s_v3*)v;
	r.vec4.w = -m[3][2] * ((m[2][2] * m[2][3]) - v[2]);
	r.vec4.x *= r.vec4.w;
	r.vec4.y *= r.vec4.w;
	r.vec4.z *= r.vec4.w;
	return (r);
}
