/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mxav.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 12:19:23 by abaur             #+#    #+#             */
/*   Updated: 2020/02/26 12:19:25 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

/*
** Multiply a vector by an affine matrix.
** Vectors of lower dimensions are automatically expanded with a 1.
** @param const t_mx m The matrix to multiply
** @param const t_v v* The vector to multiply
** @return union u_v The resulting vector.
*/

float		mx2av1(const t_mx2a m, float v)
{
	return (v * m[0][0] + m[1][0]);
}
