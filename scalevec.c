/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalevec.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:22:00 by abaur             #+#    #+#             */
/*   Updated: 2020/02/10 15:22:08 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
** Scaling may be done in-place.
** @param t_v dst Outputs the scaled vector.
** @param const t_v src The vector to scale.
** @param float scalar How much to scale the vector.
*/

extern void	scalevec2(t_v2 *dst, const t_v2 *src, float scalar)
{
	dst->x = src->x * scalar;
	dst->y = src->y * scalar;
}

extern void	scalevec3(t_v3 *dst, const t_v3 *src, float scalar)
{
	dst->x = src->x * scalar;
	dst->y = src->y * scalar;
	dst->z = src->z * scalar;
}

/*
** Multiply two vectors together component-wise.
** Scaling may be done in-place.
** @param t_v dst Outputs the scaled vector.
** @param const t_v v1,v2 The vectors to multiply together..
*/

extern void	scaledot2(t_v2 *dst, const t_v2 *v1, const t_v2 *v2)
{
	dst->x = v1->x * v2->x;
	dst->y = v1->y * v2->y;
}

extern void	scaledot3(t_v3 *dst, const t_v3 *v1, const t_v3 *v2)
{
	dst->x = v1->x * v2->x;
	dst->y = v1->y * v2->y;
	dst->z = v1->z * v2->z;
}
