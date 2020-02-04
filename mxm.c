/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mxm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 12:26:03 by abaur             #+#    #+#             */
/*   Updated: 2020/01/31 12:43:40 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

/*
** Multiply two matrices together.
** @param const t_m m The matrix to multiply with.
** @param const t_m v The matrix to be multiplied.
** @param t_m dst Ouputs the resulting matrix.
*/

extern void	mxm2(const t_mx2 m, const t_mx2 v, t_mx2 dst)
{
	dst[0][0] = (v[0][0] * m[0][0]) + (v[0][1] * m[1][0]);
	dst[0][1] = (v[0][0] * m[0][1]) + (v[0][1] * m[1][1]);
	dst[1][0] = (v[1][0] * m[0][0]) + (v[1][1] * m[1][0]);
	dst[1][1] = (v[1][0] * m[0][1]) + (v[1][1] * m[1][1]);
}

extern void	mxm3(const t_mx3 m, const t_mx3 v, t_mx3 dst)
{
	dst[0][0] = (v[0][0] * m[0][0]) + (v[0][1] * m[1][0]);
	dst[0][1] = (v[0][0] * m[0][1]) + (v[0][1] * m[1][1]);
	dst[0][2] = (v[0][0] * m[0][2]) + (v[0][1] * m[1][2]);
	dst[1][0] = (v[1][0] * m[0][0]) + (v[1][1] * m[1][0]);
	dst[1][1] = (v[1][0] * m[0][1]) + (v[1][1] * m[1][1]);
	dst[1][2] = (v[1][0] * m[0][2]) + (v[1][1] * m[1][2]);
	dst[2][0] = (v[2][0] * m[0][0]) + (v[2][1] * m[1][0]);
	dst[2][1] = (v[2][0] * m[0][1]) + (v[2][1] * m[1][1]);
	dst[2][2] = (v[2][0] * m[0][2]) + (v[2][1] * m[1][2]);
}

static void	mxm4col(const t_mx4 m, const t_mx4 v, t_mx4 dst, unsigned int x)
{
	dst[x][0] = (v[x][0] * m[0][0]) + (v[x][1] * m[1][0]) + (v[x][2] * m[2][0])
		+ (v[x][3] * m[3][0]);
	dst[x][1] = (v[x][0] * m[0][1]) + (v[x][1] * m[1][1]) + (v[x][2] * m[2][1])
		+ (v[x][3] * m[3][1]);
	dst[x][2] = (v[x][0] * m[0][2]) + (v[x][1] * m[1][2]) + (v[x][2] * m[2][2])
		+ (v[x][3] * m[3][2]);
	dst[x][3] = (v[x][0] * m[0][3]) + (v[x][1] * m[1][3]) + (v[x][2] * m[2][3])
		+ (v[x][3] * m[3][3]);
}

extern void	mxm4(const t_mx4 m, const t_mx4 v, t_mx4 dst)
{
	mxm4col(m, v, dst, 0);
	mxm4col(m, v, dst, 1);
	mxm4col(m, v, dst, 2);
	mxm4col(m, v, dst, 3);
}
