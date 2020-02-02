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

# include "vector.h"

typedef float*const	*t_mx;
typedef float		t_mx4[4][4];
typedef float		t_mx3[3][3];
typedef float		t_mx2[2][2];

void		mxtrans(t_mx matrix, t_mx destination, unsigned int rank);

void		mx3adj(t_mx3 matrix, t_mx3 destination);
void		mx3adjt(t_mx3 transposed, t_mx3 destination);

float		mx2det(t_mx2 matrix);
float		mx3det(t_mx3 matrix);
void		mx2inv(t_mx2 matrix, t_mx2 destination)
void		mx2inv(t_mx2 matrix, t_mx2 destination)

union u_v2	mx2v2(t_mx2 matrix, t_v2 vector);
union u_v3	mx3v2(t_mx3 matrix, t_v2 vector);
union u_v3	mx3v3(t_mx3 matrix, t_v3 vector);
union u_v4	mx4v3(t_mx4 matrix, t_v3 vector);
union u_v4	mx4v4(t_mx4 matrix, t_v4 vector);

#endif
