#include "matrix.h"

/*
** Computes a 3x3 matrix's adjucate from its transposed matrix.
** @param t_mx3 mt The transposed matrix.
** @param t_mx3 ma The destination matrix.
** 	The destination must be different from the source.
*/

extern void	mx3adjt(t_mx3 mt, t_mx3 ma)
{
	ma[0][0] = (mt[1][1] * mt[2][2]) - (mt[1][2] * mt[2][1]);
	ma[0][1] = (mt[1][2] * mt[2][0]) - (mt[1][0] * mt[2][2]);
	ma[0][2] = (mt[1][0] * mt[2][1]) - (mt[1][1] * mt[2][0]);
	ma[1][0] = (mt[2][1] * mt[0][2]) - (mt[2][2] * mt[0][1]);
	ma[1][1] = (mt[2][2] * mt[0][0]) - (mt[2][0] * mt[0][2]);
	ma[1][2] = (mt[2][0] * mt[0][1]) - (mt[2][1] * mt[0][0]);
	ma[2][0] = (mt[0][1] * mt[1][2]) - (mt[0][2] * mt[1][1]);
	ma[2][1] = (mt[0][2] * mt[1][0]) - (mt[0][0] * mt[1][2]);
	ma[2][2] = (mt[0][0] * mt[1][1]) - (mt[0][1] * mt[1][0]);
}