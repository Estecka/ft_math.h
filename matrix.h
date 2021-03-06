/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 12:26:22 by abaur             #+#    #+#             */
/*   Updated: 2020/02/07 14:52:46 by abaur            ###   ########.fr       */
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
typedef float		t_mx2a[2][1];

void		mx2init(t_mx2 matrix);
void		mx3init(t_mx3 matrix);
void		mx4init(t_mx4 matrix);

void		mx2cpy(const t_mx2 source, t_mx2 destination);
void		mx3cpy(const t_mx3 source, t_mx3 destination);
void		mx4cpy(const t_mx4 source, t_mx4 destination);

void		mx4eulerx(t_mx4 this, float angle);
void		mx4eulery(t_mx4 this, float angle);
void		mx4eulerz(t_mx4 this, float angle);
void		mx4euler(t_mx4 this, const t_v3 *angles);
void		mx4pos(t_mx4 this, const t_v3 *position);

void		mx2angle(t_mx2 this, float angles);
void		mx3angle(t_mx3 this, float angles);
void		mx3pos(t_mx3 this, const t_v2 *position);

void		mx3remap(t_mx3 this, const t_bbox2 *from, const t_bbox2 *to);
void		m2x1remap(float this[2][1], float from[2], float to[2]);

void		mxfrust(t_mx4 out, const t_bbox *frustrum);
void		mxfrust2d(t_mx3 out, const t_bbox2 *frustrum);

void		mx4trans(const t_mx4 matrix, t_mx4 destination);

void		mx3adj(const t_mx3 matrix, t_mx3 destination);
void		mx3adjt(const t_mx3 transposed, t_mx3 destination);

float		mx2det(const t_mx2 matrix);
float		mx3det(const t_mx3 matrix);
float		mx3det2(const t_mx3 matrix);
float		mx4det3(const t_mx4 matrix);

void		mx2inv(const t_mx2 matrix, t_mx2 destination);
void		mx2ainv(const t_mx2a matrix, t_mx2a destination);
void		mx3inv(const t_mx3 matrix, t_mx3 destination);
void		mx3invaff(const t_mx3 matrix, t_mx3 destination);
void		mx4invaff(const t_mx4 matrix, t_mx4 destination);

union u_v2	mx2v2(const t_mx2 matrix, const t_v2 *vector);
union u_v3	mx3v2(const t_mx3 matrix, const t_v2 *vector);
union u_v3	mx3v3(const t_mx3 matrix, const t_v3 *vector);
union u_v4	mx4v3(const t_mx4 matrix, const t_v3 *vector);
union u_v4	mx4v4(const t_mx4 matrix, const t_v4 *vector);
float		mx2av1(const t_mx2a matrix, float value);

void		mxm2(const t_mx2 parent, const t_mx2 child, t_mx2 destination);
void		mxm3(const t_mx3 parent, const t_mx3 child, t_mx3 destination);
void		mxm4(const t_mx4 parent, const t_mx4 child, t_mx4 destination);
void		mxm2a(const t_mx2a parent, const t_mx2a child, t_mx2a destination);

union u_v3	cartesian(const t_v4 *vector);
union u_v4	homegeneous(const t_v3 *vector, const t_mx4 matrix);
union u_v2	cartesian2d(const t_v3 *vector);
union u_v3	homegeneous2d(const t_v2 *vector, const t_mx3 matrix);
float		depthunproject2d(float depth, const t_mx3 matrix);

#endif
