/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dotprod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 14:15:01 by abaur             #+#    #+#             */
/*   Updated: 2020/02/10 14:15:02 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
** Computes the dot product of two vectors.
** @param const t_v v1,v2 The vectors to multiply.
** @return float Their dot product.
*/

extern float	dotprod2(const t_v2 *v1, const t_v2 *v2)
{
	return (v1->x * v2->x) + (v1->y * v2->y);
}

extern float	dotprod3(const t_v3 *v1, const t_v3 *v2)
{
	return (v1->x * v2->x) + (v1->y * v2->y) + (v1->z * v2->z);
}
