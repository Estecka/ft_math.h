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

extern void	mx4trans(const t_mx4 m, t_mx4 mt)
{
	unsigned int	x;
	unsigned int	y;
	float			f;

	y = 0;
	while (y < 4)
	{
		x = y;
		while (x < 4)
		{
			f = m[x][y];
			mt[x][y] = m[y][x];
			mt[y][x] = f;
			x++;
		}
		y++;
	}
}
