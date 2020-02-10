/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subvec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 15:42:21 by abaur             #+#    #+#             */
/*   Updated: 2020/01/31 15:51:55 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
** Computes the vector which goes from one point to the other.
** @param t_v3* this The output vector.
** @param const t_v3 *fro The source point.
** @param const t_v3 *to  The destination point.
** @return union u_v3 to minus from
*/

extern void	subvec3(t_v3 *this, const t_v3 *fro, const t_v3 *to)
{
	this->x = to->x - fro->x;
	this->y = to->y - fro->y;
	this->z = to->z - fro->z;
}

/*
** Computes the vector which goes from one point to the other.
** @param t_v2* this The output vector.
** @param const t_v2 *fro The source point.
** @param const t_v2 *to  The destination point.
** @return union u_v2 to minus from
*/

extern void	subvec2(t_v2 *this, const t_v2 *fro, const t_v2 *to)
{
	this->x = to->x - fro->x;
	this->y = to->y - fro->y;
}
