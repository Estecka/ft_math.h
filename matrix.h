#ifndef MATRIX_H
# define MATRIX_H

typedef float*const	*t_mx;
typedef float		t_mx4[4][4];
typedef float		t_mx3[3][3];
typedef float		t_mx2[2][2];

void	mxtrans(t_mx matrix, t_mx destination, unsigned int rank);

#endif
