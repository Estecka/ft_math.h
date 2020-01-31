/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 12:46:00 by abaur             #+#    #+#             */
/*   Updated: 2020/01/31 14:47:50 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

typedef float	*t_v;
typedef float	t_v2[2];
typedef float	t_v3[3];
typedef float	t_v4[4];

struct	s_v2
{
	float	x;
	float	y;
};

struct	s_v3
{
	float	x;
	float	y;
	float	z;
};

struct	s_v4
{
	float	x;
	float	y;
	float	z;
	float	w;
};

union	u_v
{
	t_v4		array;
	struct s_v4	vec4;
	struct s_v3	vec3;
	struct s_v2	vec2;
};

union	u_v2
{
	struct s_v2	axes;
	t_v2		array;
};

union	u_v3
{
	struct s_v3	axes;
	t_v3		array;
};

union	u_v4
{
	struct s_v4	axes;
	t_v4		array;
};

#endif
