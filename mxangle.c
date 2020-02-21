/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mxangle.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 12:26:03 by abaur             #+#    #+#             */
/*   Updated: 2020/01/31 12:43:40 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math.h"
#include "matrix.h"

/*
** Initialize a 2x2 matrix to a given rotation.
** @param t_mx3 this	The matrix to initialize.
** @param float a	The rotation angle in radiant.
*/

extern void	mx2angle(t_mx2 this, float a)
{
	float c;
	float s;

	c = cos(a);
	s = sin(a);
	this[0][0] = c;
	this[0][1] = s;
	this[1][0] = -s;
	this[1][1] = c;
}

/*
** Changes the 2x2 portion of a 3x3 matrix to a rotation by a given angle.
** The rest of the matrix is left unchanged
** @param t_mx3 this	The matrix to alter.
** @param float a	The rotation angle in radiant.
*/

extern void	mx3angle(t_mx3 this, float a)
{
	float c;
	float s;

	c = cos(a);
	s = sin(a);
	this[0][0] = c;
	this[0][1] = s;
	this[1][0] = -s;
	this[1][1] = c;
}

/*
** Sets the translation portion of a 3x3 matrix.
** The rest of the matrix is left unchanged.
** @param t_mx3* this	The matrix to alter.
** @param t_v2*	pos	The new translation to be represented.
*/

extern void	mx3pos(t_mx3 this, const t_v2 *pos)
{
	this[2][0] = pos->x;
	this[2][1] = pos->y;
}
