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
** Initializes a matrix as the rotation matrix around a single axis..
** @param t_mx4 this The matrix to initialize.
** @param float a The rotation angle in radiant.
*/

extern void	mx4eulerx(t_mx4 this, float a)
{
	float c;
	float s;

	c = cos(a);
	s = sin(a);
	mx4init(this);
	this[1][1] = c;
	this[2][2] = c;
	this[2][1] = -s;
	this[1][2] = s;
}

extern void	mx4eulery(t_mx4 this, float a)
{
	float c;
	float s;

	c = cos(a);
	s = sin(a);
	mx4init(this);
	this[0][0] = c;
	this[2][2] = c;
	this[2][0] = s;
	this[0][2] = -s;
}

extern void	mx4eulerz(t_mx4 this, float a)
{
	float c;
	float s;

	c = cos(a);
	s = sin(a);
	mx4init(this);
	this[0][0] = c;
	this[1][1] = c;
	this[1][0] = -s;
	this[0][1] = s;
}

/*
** Initializes a rotation matrix.
** @param t_mx4 this The matrix to initialize.
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
	mx4init(this);
	this[0][0] = +c.z * ((c.y * c.x) + (s.y * s.x));
	this[1][0] = -s.z * ((c.y * c.x) - (s.y * s.x));
	this[2][0] = (c.y * s.x) + (s.y * c.x);
	this[0][1] = s.z;
	this[1][1] = c.z;
	this[2][1] = 0;
	this[0][2] = -c.z * ((s.y * c.x) + (c.y * s.x));
	this[1][2] = +s.z * ((s.y * c.x) - (c.y * s.x));
	this[2][3] = (c.y * c.x) - (s.y * s.x);
}
