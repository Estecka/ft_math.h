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
