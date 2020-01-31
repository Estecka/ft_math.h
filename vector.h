/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 12:46:00 by abaur             #+#    #+#             */
/*   Updated: 2020/01/31 15:06:00 by abaur            ###   ########.fr       */
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

union	u_v2
{
	t_v2		array;
	struct s_v2	vec2;
};

union	u_v3
{
	t_v3		array;
	struct s_v3	vec3;
	struct s_v2	vec2;
};

union	u_v4
{
	t_v4		array;
	struct s_v4	vec4;
	struct s_v3	vec3;
	struct s_v2	vec2;
};

#endif
