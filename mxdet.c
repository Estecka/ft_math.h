/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mxdet.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 12:26:03 by abaur             #+#    #+#             */
/*   Updated: 2020/01/31 12:43:40 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

/*
** Computes a 2x2 matrix's determinant.
** @param t_mx2 m The matrix whose determinant to compute.
** @return float The determinant.
*/

extern float	mx2det(t_mx2 m)
{
	return ((m[0][0] * m[1][1]) - (m[0][1] * m[1][0]));
}

/*
** Computes a 3x3 matrix's determinant.
** @param t_mx2 m The matrix whose determinant to compute.
** @return float The determinant.
*/

extern float	mx3det(t_mx3 m)
{
	return (
		m[0][0] * ((m[1][1] * m[2][2]) - (m[1][2] * m[2][1]))
		- m[1][0] * ((m[0][1] * m[2][2]) - (m[0][2] * m[2][1]))
		+ m[2][0] * ((m[0][1] * m[1][2]) - (m[0][2] * m[1][1]))
	);
}
