/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mxremap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 14:55:08 by abaur             #+#    #+#             */
/*   Updated: 2020/02/21 14:55:13 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

/*
** Creates a matrix that remaps one range to another.
** @param t_mx3 this	the matrix to initialize.
** @param t_bbox2* fro	The source range.
** 	The source is assumed to be non-singular.
** @param t_bbox2* to	The destination range.
*/

extern void	mx3remap(t_mx3 this, const t_bbox2 *fro, const t_bbox2 *to)
{
	this[0][0] = (to->max.x - to->min.x) / (fro->max.x - fro->min.x);
	this[0][1] = 0;
	this[1][0] = 0;
	this[1][1] = (to->max.y - to->min.y) / (fro->max.y - fro->min.y);
	this[2][0] = to->min.x - (fro->min.x * this[0][0]);
	this[2][1] = to->min.y - (fro->min.y * this[1][1]);
	this[0][2] = 0;
	this[1][2] = 0;
	this[2][2] = 1;
}
