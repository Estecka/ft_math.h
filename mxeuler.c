/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mxeuler.c                                          :+:      :+:    :+:   */
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
** Changes the 3x3 portion of a 4x4 matrix to a rotation around a single axis.
** The rest of the matrix is kept unchanged
** @param t_mx4 this The matrix to alter.
** @param float a The rotation angle in radiant.
*/

extern void	mx4eulerx(t_mx4 this, float a)
{
	float c;
	float s;

	c = cos(a);
	s = sin(a);
	this[0][0] = 1;
	this[0][1] = 0;
	this[0][2] = 0;
	this[1][0] = 0;
	this[1][1] = c;
	this[1][2] = s;
	this[2][0] = 0;
	this[2][1] = -s;
	this[2][2] = c;
}

extern void	mx4eulery(t_mx4 this, float a)
{
	float c;
	float s;

	c = cos(a);
	s = sin(a);
	this[0][0] = c;
	this[0][1] = 0;
	this[0][2] = -s;
	this[1][0] = 0;
	this[1][1] = 1;
	this[1][2] = 0;
	this[2][0] = s;
	this[2][1] = 0;
	this[2][2] = c;
}

extern void	mx4eulerz(t_mx4 this, float a)
{
	float c;
	float s;

	c = cos(a);
	s = sin(a);
	this[0][0] = c;
	this[0][1] = s;
	this[0][2] = 0;
	this[1][0] = -s;
	this[1][1] = c;
	this[1][2] = 0;
	this[2][0] = 0;
	this[2][1] = 0;
	this[2][2] = 1;
}

/*
** Changes the 3x3 portion of a 4x4 matrix to a rotation around three axes.
** @param t_mx4 this The matrix to alter.
** @param const t_v3 *a The rotation angles in radiant.
*/

extern void mx4euler(t_mx4 this, const t_v3 *a)
{
	struct s_v3 c;
	struct s_v3 s;

	c.x = cos(a->x);
	c.y = cos(a->y);
	c.z = cos(a->z);
	s.x = sin(a->x);
	s.y = sin(a->y);
	s.z = sin(a->z);
	this[0][0] = +c.z * ((c.y * c.x) - (s.y * s.x));
	this[0][1] = s.z;
	this[0][2] = -c.z * ((s.y * c.x) + (c.y * s.x));
	this[1][0] = -s.z * ((c.y * c.x) + (s.y * s.x));
	this[1][1] = c.z;
	this[1][2] = +s.z * ((s.y * c.x) - (c.y * s.x));
	this[2][0] = (c.y * s.x) + (s.y * c.x);
	this[2][1] = 0;
	this[2][2] = (c.y * c.x) - (s.y * s.x);
}
