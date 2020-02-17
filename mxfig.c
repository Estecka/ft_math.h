/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mxfig.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:53:22 by abaur             #+#    #+#             */
/*   Updated: 2020/02/17 14:53:24 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include "matrix.h"
#include "figure.h"

/*
** Transforms a quad with a linear or affine 4x4 matrix.
** @param const t_quad src	The quad to transform.
** @param t_quad dst	Outputs the transformed quad.
** 	Source and destination can be the same.
** @param t_mx4 mx	The transformation to apply.
*/

void		mxquad3(const t_quad src, t_quad dst, t_mx4 mx)
{
	dst[0] = mx4v3(mx, &src[0]).vec3;
	dst[1] = mx4v3(mx, &src[1]).vec3;
	dst[2] = mx4v3(mx, &src[2]).vec3;
	dst[3] = mx4v3(mx, &src[3]).vec3;
}

/*
** Transforms a quad with a 4x4 matrix.
** The matrix maybe projective.
** @param const t_quad src	The quad to transform.
** @param t_v4[4] dst	Outputs the transformed quad.
** @param t_mx4 mx	The transformation to apply.
*/

void		mxquad4(const t_quad src, t_v4 dst[4], t_mx4 mx)
{
	dst[0] = mx4v3(mx, &src[0]).vec4;
	dst[1] = mx4v3(mx, &src[1]).vec4;
	dst[2] = mx4v3(mx, &src[2]).vec4;
	dst[3] = mx4v3(mx, &src[3]).vec4;
}
