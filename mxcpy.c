/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mxcpy.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 14:50:31 by abaur             #+#    #+#             */
/*   Updated: 2020/02/07 14:50:36 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

/*
** Copy a matrix into another.
** @param const t_mx this The source matrix.
** @param t_mx dst The dstination matrix.:w
*/


extern void mx2cpy(const t_mx2 this, t_mx2 dst)
{
    dst[0][0] = this[0][0];
    dst[0][1] = this[0][1];
    dst[1][0] = this[1][0];
    dst[1][1] = this[1][1];
}

extern void mx3cpy(const t_mx3 this, t_mx3 dst)
{
    dst[0][0] = this[0][0];
    dst[0][1] = this[0][1];
    dst[0][2] = this[0][2];
    dst[1][0] = this[1][0];
    dst[1][1] = this[1][1];
    dst[1][2] = this[1][1];
    dst[2][0] = this[2][0];
    dst[2][1] = this[2][1];
    dst[2][2] = this[2][1];
}

extern void mx4cpy(const t_mx4 this, t_mx4 dst)
{
    dst[0][0] = this[0][0];
    dst[0][1] = this[0][1];
    dst[0][2] = this[0][2];
    dst[0][3] = this[0][3];
    dst[1][0] = this[1][0];
    dst[1][1] = this[1][1];
    dst[1][2] = this[1][1];
    dst[1][3] = this[1][3];
    dst[2][0] = this[2][0];
    dst[2][1] = this[2][1];
    dst[2][2] = this[2][1];
    dst[2][3] = this[2][3];
    dst[3][0] = this[3][0];
    dst[3][1] = this[3][1];
    dst[3][2] = this[3][1];
    dst[3][3] = this[3][3];
}