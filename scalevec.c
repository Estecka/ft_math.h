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

void		scalevec2(t_v2 *dst, const t_v2 *src, float scalar)
{
	dst->x = src->x * scalar;
	dst->y = src->y * scalar;
}

void		scalevec3(t_v3 *dst, const t_v3 *src, float scalar)
{
	dst->x = src->x * scalar;
	dst->y = src->y * scalar;
	dst->z = src->z * scalar;
}
