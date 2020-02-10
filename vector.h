/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 12:46:00 by abaur             #+#    #+#             */
/*   Updated: 2020/01/31 15:53:25 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

typedef float	*t_v;

typedef struct s_v2	t_v2;
struct		s_v2
{
	float	x;
	float	y;
};

typedef struct s_v3	t_v3;
struct		s_v3
{
	float	x;
	float	y;
	float	z;
};

typedef struct s_v4	t_v4;
struct		s_v4
{
	float	x;
	float	y;
	float	z;
	float	w;
};

union		u_v2
{
	float		array[2];
	struct s_v2	vec2;
};

union		u_v3
{
	float		array[3];
	struct s_v3	vec3;
	struct s_v2	vec2;
};

union		u_v4
{
	float		array[4];
	struct s_v4	vec4;
	struct s_v3	vec3;
	struct s_v2	vec2;
};

void		addvec2(t_v2 *destination, const t_v2 *v1, const t_v2 *v2);
void		addvec3(t_v3 *destination, const t_v3 *v1, const t_v3 *v2);
void		subvec2(t_v2 *destination, const t_v2 *fro, const t_v2 *to);
void		subvec3(t_v3 *destination, const t_v3 *fro, const t_v3 *to);

float		dotprod2(const t_v2 *i, const t_v2 *j);
float		dotprod3(const t_v3 *i, const t_v3 *j);
float		crossp2(const t_v2 *i, const t_v2 *j);
union u_v3	crossp3(const t_v3 *i, const t_v3 *j);

#endif
