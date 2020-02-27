/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mxproj.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 12:26:03 by abaur             #+#    #+#             */
/*   Updated: 2020/01/31 12:43:40 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** Computes a projection matrix after the dimensions of the frustrum.
** The canonical view space is [-1; 1] on all dimensions.
** @param t_mx4 this The matrix to initialize.
** @param const t_bbox *box The dimensions of the frustrum.
** 	box.min.x Left
** 	box.min.y Bottom
** 	box.min.z Far
** 	box.max.x Right
** 	box.max.y Top
** 	box.max.z Near
*/

extern void	mxfrust(t_mx4 this, const t_bbox *box)
{
	float iwidth;
	float iheight;
	float idepth;

	iwidth = 1 / (box->max.x - box->min.x);
	iheight = 1 / (box->max.y - box->min.y);
	idepth = 1 / (box->min.z - box->max.z);
	mx4init(this);
	this[0][0] = -2 * box->max.z * iwidth;
	this[0][2] = (box->min.x + box->max.x) * iwidth;
	this[1][1] = -2 * box->max.z * iheight;
	this[2][1] = (box->min.y + box->max.y) * iheight;
	this[2][2] = -(box->max.z + box->min.z) * idepth;
	this[3][2] = 2 * box->max.z * box->min.z * idepth;
	this[3][3] = 0;
	this[2][3] = -1;
}

/*
** Computes a projection matrix after the dimensions of the frustrum.
** The resulting clip space is [-1; 1] on all dimensions.
** @param t_mx3 this The matrix to initialize.
** @param const t_bbox2* box	The dimensions of the frustrum.
** 	box.min.x Left
** 	box.min.y Far
** 	box.max.x Right
** 	box.max.y Near
*/

extern void	mxfrust2d(t_mx3 this, const t_bbox2 *box)
{
	float iwidth;
	float idepth;

	iwidth = 1 / (box->max.x - box->min.x);
	idepth = 1 / (box->min.y - box->max.y);
	mx3init(this);
	this[0][0] = -2 * box->max.y * iwidth;
	this[0][1] = (box->min.x + box->max.x) * iwidth;
	this[1][1] = -(box->max.y + box->min.y) * idepth;
	this[2][1] = 2 * box->max.y * box->min.y * idepth;
	this[2][2] = 0;
	this[1][2] = -1;
}
