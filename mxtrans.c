/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mxtrans.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 12:26:16 by abaur             #+#    #+#             */
/*   Updated: 2020/01/31 12:26:49 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

/*
** Transposes a matrix of size n*n.
** @param const t_mx m  The matrix to be transposed
** @param t_mx mt The destination matrix.
** 	The destination can be the same as the source.
** @param int n The size of the matrix.
*/

extern void	mxtrans(const t_mx m, t_mx mt, unsigned int n)
{
	unsigned int	x;
	unsigned int	y;
	float			f;

	y = 0;
	while (y < n)
	{
		x = y;
		while (x < n)
		{
			f = m[x][y];
			mt[x][y] = m[y][x];
			mt[y][x] = f;
			x++;
		}
		y++;
	}
}
