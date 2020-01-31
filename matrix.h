/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 12:26:22 by abaur             #+#    #+#             */
/*   Updated: 2020/01/31 12:44:36 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_H
# define MATRIX_H

typedef float*const	*t_mx;
typedef float		t_mx4[4][4];
typedef float		t_mx3[3][3];
typedef float		t_mx2[2][2];

void	mxtrans(t_mx matrix, t_mx destination, unsigned int rank);

void	mx3adj(t_mx3 matrix, t_mx3 destination);
void	mx3adjt(t_mx3 transposed, t_mx3 destination);

#endif
