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

	r.vec4.w = -m[3][2] * m[2][3] / (m[2][2] - (m[2][3] * v->z));
	r.vec4.x = v->x * r.vec4.w;
	r.vec4.y = v->y * r.vec4.w;
	r.vec4.z = v->z * r.vec4.w;
	return (r);
}

/*
** Computes the cartesian coordinates of a homogeneous vector.
** @param const t_v3* v The homegenous vector.
** @return union u_v2 The cartesian vector.
*/

union u_v2	cartesian2d(const t_v3 *v)
{
	union u_v2	r;
	float		z;

	if (v->z != 1)
	{
		z = 1 / v->z;
		r.vec2.x = v->x * z;
		r.vec2.y = v->y * z;
		return (r);
	}
	else
		return (*(union u_v2*)v);
}

/*
** Computes the homogeneous coordinates of a cartesian vector.
** @param const t_v2* v The cartesian point
** @param const t_mx3 m The projection matrix that was used to obtain the point.
** 	This is assumed to be a valid perspective matrix :
** 	[m00 m20 m30]
** 	[  0 m22 m32]
** 	[  0 m23   0]
** @return union u_v3 The homogeneous vector.
*/

union u_v3	homegeneous2d(const t_v2 *v, const t_mx3 m)
{
	union u_v3	r;

	r.vec3.z = -m[2][1] * m[1][2] / (m[1][1] - (m[1][2] * v->y));
	r.vec3.x = v->x * r.vec3.z;
	r.vec3.y = v->y * r.vec3.z;
	return (r);
}

/*
** Computes the actual depth of a pprojected point.
** @param float z	The depth of the point in cartesian clip space.
** @param t_mx3 mx	The projection matrix that was used to project the point.
** 	The matrix is assumed to have the following format :
** 	[m00 m20 m30]
** 	[  0 m22 m32]
** 	[  0 m23   0]
** @return float	The depth of the point in view space.
*/

float		depthunproject2d(float z, const t_mx3 m)
{
	return (m[2][1] / ((m[1][2] * z) - m[1][1]));
}
