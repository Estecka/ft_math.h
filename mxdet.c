/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mxdet.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 12:26:03 by abaur             #+#    #+#             */
/*   Updated: 2020/02/03 11:51:34 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

/*
** Computes a 2x2 matrix's determinant.
** @param const t_mx2 m The matrix whose determinant to compute.
** @return float The determinant.
*/

extern float	mx2det(const t_mx2 m)
{
	return ((m[0][0] * m[1][1]) - (m[0][1] * m[1][0]));
}

/*
** Computes a 2x2 matrix's determinant.
** @param const t_mx3 m	A 3x3 matrix containing the 2x2 matrix.
** @return float The determinant.
*/

extern float	mx3det2(const t_mx3 m)
{
	return ((m[0][0] * m[1][1]) - (m[0][1] * m[1][0]));
}

/*
** Computes a 3x3 matrix's determinant.
** @param const t_mx3 m The matrix whose determinant to compute.
** @return float The determinant.
*/

extern float	mx3det(const t_mx3 m)
{
	return (
		m[0][0] * ((m[1][1] * m[2][2]) - (m[1][2] * m[2][1]))
		- m[1][0] * ((m[0][1] * m[2][2]) - (m[0][2] * m[2][1]))
		+ m[2][0] * ((m[0][1] * m[1][2]) - (m[0][2] * m[1][1]))
);
}

/*
** Computes a 3x3 matrix's determinant.
** @param const t_mx4 m	A 4x4 matrix that contains the 3x3 matrix.
** @return float The determinant.
*/

extern float	mx4det3(const t_mx4 m)
{
	return (
		m[0][0] * ((m[1][1] * m[2][2]) - (m[1][2] * m[2][1]))
		- m[1][0] * ((m[0][1] * m[2][2]) - (m[0][2] * m[2][1]))
		+ m[2][0] * ((m[0][1] * m[1][2]) - (m[0][2] * m[1][1]))
);
}
