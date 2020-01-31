/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 15:31:39 by abaur             #+#    #+#             */
/*   Updated: 2020/01/31 16:03:54 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

# include "vector.h"
# include "matrix.h"

float	minf3(float a, float b, float c);
float	maxf3(float a, float b, float c);
float	minf4(float a, float b, float c, float d);
float	maxf4(float a, float b, float c, float d);

short	tricontain(t_v2 p, t_v2 a, t_v2 b, t_v2 c);
short	quadcontain(t_v2 p, t_v2 a, t_v2 b, t_v2 c, t_v2 d);

#endif
