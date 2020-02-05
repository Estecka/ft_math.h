/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 12:26:22 by abaur             #+#    #+#             */
/*   Updated: 2020/02/03 11:35:03 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_H
# define MATRIX_H

# include "boundingbox.h"
# include "vector.h"

typedef float*const	*t_mx;
typedef float		t_mx4[4][4];
typedef float		t_mx3[3][3];
typedef float		t_mx2[2][2];

void 		mx2init(t_mx2 matrix);
void 		mx3init(t_mx3 matrix);
void 		mx4init(t_mx4 matrix);

void		mxfrust(t_mx4 out, const t_bbox *frustrum);

void		mxtrans(const t_mx matrix, t_mx destination, unsigned int rank);

void		mx3adj(const t_mx3 matrix, t_mx3 destination);
void		mx3adjt(const t_mx3 transposed, t_mx3 destination);

float		mx2det(const t_mx2 matrix);
float		mx3det(const t_mx3 matrix);

void		mx2inv(const t_mx2 matrix, t_mx2 destination);
void		mx3inv(const t_mx3 matrix, t_mx3 destination);

union u_v2	mx2v2(const t_mx2 matrix, const t_v2 *vector);
union u_v3	mx3v2(const t_mx3 matrix, const t_v2 *vector);
union u_v3	mx3v3(const t_mx3 matrix, const t_v3 *vector);
union u_v4	mx4v3(const t_mx4 matrix, const t_v3 *vector);
union u_v4	mx4v4(const t_mx4 matrix, const t_v4 *vector);

void		mxm2(const t_mx2 parent, const t_mx2 child, t_mx2 destination);
void		mxm3(const t_mx3 parent, const t_mx3 child, t_mx3 destination);
void		mxm4(const t_mx4 parent, const t_mx4 child, t_mx4 destination);

union u_v3	cartesian(const t_v4 *vector);
union u_v4	homegeneous(const t_v3 *vector, const t_mx4 matrix);

#endif
