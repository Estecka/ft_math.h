/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addvec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 15:42:21 by abaur             #+#    #+#             */
/*   Updated: 2020/01/31 15:51:55 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
** Computes the sum of two vectors.
** @param t_v* this The output vector. 
** @param t_v* v1, v2 The vectors to add together.
*/

extern void	addvec3(t_v3 *this, const t_v3 *v1, const t_v3 *v2)
{
	this->x = v2->x + v1->x;
	this->y = v2->y + v1->y;
	this->z = v2->z + v1->z;
}

extern void	addvec2(t_v2 *this, const t_v2 *v1, const t_v2 *v2)
{
	this->x = v2->x + v1->x;
	this->y = v2->y + v1->y;
}
