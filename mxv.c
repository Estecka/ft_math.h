/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mxv.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 12:26:03 by abaur             #+#    #+#             */
/*   Updated: 2020/01/31 12:43:40 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

/*
** Multiply a vector by a matrix.
** Vectors of lower dimensions are automatically expanded with a 1.
** @param t_mx m The matrix to multiply
** @param t_v v The vector to multiply
** @return t_v The resulting vector.
*/

union u_v2	mx2v2(t_mx2 m, t_v2 v)
{
	return ((union u_v2){
		.vec2 = {
			.x = (v[0]*m[0][0]) + (v[1]*m[1][0]),
			.y = (v[0]*m[0][1]) + (v[1]*m[1][1]),
		}
	});
}

union u_v3	mx3v2(t_mx3 m, t_v2 v)
{
	return ((union u_v4){
		.vec4 = {
			.x = (v[0]*m[0][0]) + (v[1]*m[1][0]) + m[2][0],
			.y = (v[0]*m[0][1]) + (v[1]*m[1][1]) + m[2][1],
			.z = (v[0]*m[0][2]) + (v[1]*m[1][2]) + m[2][2],
		}
	});
}

union u_v3	mx3v3(t_mx3 m, t_v3 v)
{
	return ((union u_v4){
		.vec4 = {
			.x = (v[0]*m[0][0]) + (v[1]*m[1][0]) + (v[2]*m[2][0]),
			.y = (v[0]*m[0][1]) + (v[1]*m[1][1]) + (v[2]*m[2][1]),
			.z = (v[0]*m[0][2]) + (v[1]*m[1][2]) + (v[2]*m[2][2]),
		}
	});
}

union u_v4	mx4v3(t_mx4 m, t_v3 v)
{
	return ((union u_v4){
		.vec4 = {
			.x = (v[0]*m[0][0]) + (v[1]*m[1][0]) + (v[2]*m[2][0]) + m[3][0],
			.y = (v[0]*m[0][1]) + (v[1]*m[1][1]) + (v[2]*m[2][1]) + m[3][1],
			.z = (v[0]*m[0][2]) + (v[1]*m[1][2]) + (v[2]*m[2][2]) + m[3][2],
			.w = (v[0]*m[0][3]) + (v[1]*m[1][3]) + (v[2]*m[2][3]) + m[3][3],
		}
	});
}

union u_v4	mx4v4(t_mx4 m, t_v4 v)
{
	return ((union u_v4){
		.vec4 = {
			.x = (v[0]*m[0][0]) + (v[1]*m[1][0]) + (v[2]*m[2][0])
				+ (v[3]*m[3][0]),
			.y = (v[0]*m[0][1]) + (v[1]*m[1][1]) + (v[2]*m[2][1])
				+ (v[3]*m[3][1]),
			.z = (v[0]*m[0][2]) + (v[1]*m[1][2]) + (v[2]*m[2][2])
				+ (v[3]*m[3][2]),
			.w = (v[0]*m[0][3]) + (v[1]*m[1][3]) + (v[2]*m[2][3])
				+ (v[3]*m[3][3]),
		}
	});
}
