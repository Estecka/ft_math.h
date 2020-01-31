/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floatminmax.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 15:33:35 by abaur             #+#    #+#             */
/*   Updated: 2020/01/31 15:33:36 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Finds the smallest/greatest value amongst given floats.
** @param float ... The floats to compare.
** @return float The smallest/greatest float found.
*/

extern float	minf3(float a, float b, float c)
{
	if (b < a)
		a = b;
	if (c < a)
		return (c);
	return (a);
}

extern float	maxf3(float a, float b, float c)
{
	if (b > a)
		a = b;
	if (c > a)
		return (c);
	return (a);
}

extern float	minf4(float a, float b, float c, float d)
{
	if (b < a)
		a = b;
	if (c < a)
		a = c;
	if (d < a)
		return (d);
	return (a);
}

extern float	maxf4(float a, float b, float c, float d)
{
	if (b > a)
		a = b;
	if (c > a)
		a = c;
	if (d > a)
		return (d);
	return (a);
}
