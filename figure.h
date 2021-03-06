/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   figure.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 16:12:50 by abaur             #+#    #+#             */
/*   Updated: 2020/02/03 11:52:26 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIGURE_H
# define FIGURE_H

# include "vector.h"
# include "boundingbox.h"
# include "matrix.h"

typedef struct s_v2	t_seg2[2];
typedef struct s_v3	t_tri[3];
typedef struct s_v3	t_quad[4];

struct		s_tri
{
	struct s_v3	a;
	struct s_v3	b;
	struct s_v3	c;
};

struct		s_quad
{
	struct s_v3	a;
	struct s_v3	b;
	struct s_v3	c;
	struct s_v3	d;
};

union		u_tri
{
	t_tri			array;
	struct s_tri	points;
};

union		u_quad
{
	t_quad			array;
	struct s_quad	points;
};

union u_v4	planeeq(const t_v3 *normale, const t_v3 *point);
float		planex(const t_v4 *equation, const t_v3 *point);
float		planey(const t_v4 *equation, const t_v3 *point);
float		planez(const t_v4 *equation, const t_v3 *point);

union u_v3	lineeq(const t_v2 *normale, const t_v2 *point);
float		linex(const t_v3 *equation, const t_v2 *point);
float		liney(const t_v3 *equation, const t_v2 *point);

short		tricontain(const t_v2 *point, const t_tri triangle);
short		quadcontain(const t_v2 *point, const t_quad quadrilater);
union u_v3	normale(const t_v3 *figure);
union u_v2	normale2d(const t_v2 *segment);

void		bb2seg(t_bbox2 *this, t_seg2 seg);
void		bbtri(t_bbox *this, t_tri triangle);
void		bbquad(t_bbox *this, t_quad quadrilater);

void		mxquad3(const t_quad source, t_quad destination, t_mx4 matrix);
void		mxquad4(const t_quad source, t_v4 destination[4], t_mx4 matrix);

#endif
