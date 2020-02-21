/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mxinv.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 12:26:03 by abaur             #+#    #+#             */
/*   Updated: 2020/02/03 11:51:48 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

/*
** Computes a 2x2 matrix's inverse.
** @param const t_mx2 m The matrix to inverse.
** @param t_mx2 mi Outputs the inverted matrix.
*/

extern void	mx2inv(const t_mx2 m, t_mx2 mi)
{
	float d;

	d = 1 / mx2det(m);
	mi[0][0] = m[1][1] * d;
	mi[0][1] = m[0][1] * d * -1;
	mi[1][0] = m[1][0] * d * -1;
	mi[1][1] = m[0][0] * d;
}

/*
** Computes a 3x3 matrix's inverse.
** @param const t_mx3 m The matrix to inverse.
** @param t_mx3 mi Outputs the inverted matrix.
*/

extern void	mx3inv(const t_mx3 m, t_mx3 mi)
{
	float d;

	d = 1 / mx3det(m);
	mi[0][0] = ((m[1][1] * m[2][2]) - (m[2][1] * m[1][2])) * d;
	mi[1][0] = ((m[2][0] * m[1][2]) - (m[1][0] * m[2][2])) * d;
	mi[2][0] = ((m[1][0] * m[2][1]) - (m[2][0] * m[1][1])) * d;
	mi[0][1] = ((m[2][1] * m[0][2]) - (m[0][1] * m[2][2])) * d;
	mi[1][1] = ((m[0][0] * m[2][2]) - (m[2][0] * m[0][2])) * d;
	mi[2][1] = ((m[2][0] * m[0][1]) - (m[0][0] * m[2][1])) * d;
	mi[0][2] = ((m[0][1] * m[1][2]) - (m[1][1] * m[0][2])) * d;
	mi[1][2] = ((m[1][0] * m[0][2]) - (m[0][0] * m[1][2])) * d;
	mi[2][2] = ((m[0][0] * m[1][1]) - (m[1][0] * m[0][1])) * d;
}

/*
** Computes an affine 3x3 matrix's inverse.
** @param const t_mx3 m The matrix to inverse.
** @param t_mx3 mi Outputs the inverted matrix.
*/

extern void	mx3invaff(const t_mx3 m, t_mx3 mi)
{
	float d;

	d = 1 / mx3det2(m);
	mi[0][0] = m[1][1] * d;
	mi[0][1] = m[0][1] * d * -1;
	mi[1][0] = m[1][0] * d * -1;
	mi[1][1] = m[0][0] * d;
	mi[2][0] = -((m[2][0] * mi[0][0]) + (m[2][1] * mi[1][0]));
	mi[2][1] = -((m[2][0] * mi[0][1]) + (m[2][1] * mi[1][1]));
	mi[0][2] = 0;
	mi[1][2] = 0;
	mi[2][2] = 1;
}

/*
** Computes a affine 4x4 matrix's inverse.
** @param const t_mx4 m The matrix to inverse.
** @param t_mx4 mi Outputs the inverted matrix.
*/

extern void	mx4invaff(const t_mx4 m, t_mx4 mi)
{
	float d;

	d = 1 / mx4det3(m);
	mi[0][0] = ((m[1][1] * m[2][2]) - (m[2][1] * m[1][2])) * d;
	mi[1][0] = ((m[2][0] * m[1][2]) - (m[1][0] * m[2][2])) * d;
	mi[2][0] = ((m[1][0] * m[2][1]) - (m[2][0] * m[1][1])) * d;
	mi[0][1] = ((m[2][1] * m[0][2]) - (m[0][1] * m[2][2])) * d;
	mi[1][1] = ((m[0][0] * m[2][2]) - (m[2][0] * m[0][2])) * d;
	mi[2][1] = ((m[2][0] * m[0][1]) - (m[0][0] * m[2][1])) * d;
	mi[0][2] = ((m[0][1] * m[1][2]) - (m[1][1] * m[0][2])) * d;
	mi[1][2] = ((m[1][0] * m[0][2]) - (m[0][0] * m[1][2])) * d;
	mi[2][2] = ((m[0][0] * m[1][1]) - (m[1][0] * m[0][1])) * d;
	mi[3][0] = -((m[3][0] * mi[0][0]) + (m[3][1] * mi[1][0])
		+ (m[3][2] * mi[2][0]));
	mi[3][1] = -((m[3][0] * mi[0][1]) + (m[3][1] * mi[1][1])
		+ (m[3][2] * mi[2][1]));
	mi[3][2] = -((m[3][0] * mi[0][2]) + (m[3][1] * mi[1][2])
		+ (m[3][2] * mi[2][2]));
	mi[0][3] = 0;
	mi[1][3] = 0;
	mi[2][3] = 0;
	mi[3][3] = 1;
}
