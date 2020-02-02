/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mxinv.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 12:26:03 by abaur             #+#    #+#             */
/*   Updated: 2020/01/31 12:43:40 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

/*
** Computes a 2x2 matrix's inverse.
** @param t_mx2 m The matrix to inverse.
** @param t_mx2 mi Outputs the inverted matrix.
*/

extern void	mx2inv(t_mx2 m, t_mx2 mi)
{
	float d;

	d = 1/mx2det(m);
	mi[0][0] = m[1][1] * d;
	mi[0][1] = m[0][1] * d * -1;
	mi[1][0] = m[1][0] * d * -1;
	mi[1][1] = m[0][0] * d;
}

/*
** Computes a 3x3 matrix's inverse.
** @param t_mx3 m The matrix to inverse.
** @param t_mx3 mi Outputs the inverted matrix.
*/

extern void	mx2inv(t_mx2 m, t_mx2 mi)
{
	float d;

	d = 1/mx3det(m);
	m[0][0] = ((m[1][1] * m[2][2]) - (m[2][1] * m[1][2])) * d;
	m[1][0] = ((m[2][0] * m[1][2]) - (m[1][0] * m[2][2])) * d;
	m[2][0] = ((m[1][0] * m[2][1]) - (m[2][0] * m[1][1])) * d;
	m[0][1] = ((m[2][1] * m[0][2]) - (m[0][1] * m[2][2])) * d;
	m[1][1] = ((m[0][0] * m[2][2]) - (m[2][0] * m[0][2])) * d;
	m[2][1] = ((m[2][0] * m[0][1]) - (m[0][0] * m[2][1])) * d;
	m[0][2] = ((m[0][1] * m[1][2]) - (m[1][1] * m[0][2])) * d;
	m[1][2] = ((m[1][0] * m[0][2]) - (m[0][0] * m[1][2])) * d;
	m[2][2] = ((m[0][0] * m[1][1]) - (m[1][0] * m[0][1])) * d;
}
