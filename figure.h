/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   figure.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 16:12:50 by abaur             #+#    #+#             */
/*   Updated: 2020/01/31 16:31:45 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIGURE_H
# define FIGURE_H

# include "vector.h"

typedef union u_v3	t_tri[3];
typedef union u_v3	t_quad[4];

struct	s_tri
{
	union u_v3	a;
	union u_v3	b;
	union u_v3	c;
};

struct	s_quad
{
	union u_v3	a;
	union u_v3	b;
	union u_v3	c;
	union u_v3	d;
};

union	u_tri
{
	t_tri			array;
	struct	s_tri	points;
};

union	u_quad
{
	t_quad			array;
	struct	s_quad	points;
};

short	tricontain(t_v2 point, t_tri triangle);
short	quadcontain(t_v2 point, t_quad quadrilater);

#endif
