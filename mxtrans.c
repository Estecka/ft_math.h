#include "matrix.h"

/*
** Transposes a matrix of size n*n.
** @param float* m  The matrix to be transposed
** @param float* mt The destination matrix.
** 	The destination can be either different or the same as the source.
** @param int n The size of the matrix.
*/

extern void	mxtrans(float *m, float *mt, int n)
{
	unsigned int	x;
	unsigned int	y;
	float			f;

	y = 0;
	while(y < n)
	{
		x = y;
		while(x < n)
		{
			f = m[x + (n * y)];
			mt[x + (n * y)] = m[y + (n * x)];
			mt[y + (n * x)] = f;
			x++;
		}
		y++;
	}
}
