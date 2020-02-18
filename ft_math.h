/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 15:31:39 by abaur             #+#    #+#             */
/*   Updated: 2020/01/31 16:13:24 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

# define DEG2RAD 0.01745329251994329576923690768489

# include "vector.h"
# include "matrix.h"
# include "figure.h"
# include "boundingbox.h"

float	minf3(float a, float b, float c);
float	maxf3(float a, float b, float c);
float	minf4(float a, float b, float c, float d);
float	maxf4(float a, float b, float c, float d);

#endif
