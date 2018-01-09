#ifndef _mexReinitialization_H
#define _mexReinitialization_H

typedef struct
{	
	int *soXo;
	int *soxo;
	int *sYoo;
	int *syoo;
	int *sooZ;
	int *sooz;
} shift_mat;

// prototype for the Reinitialization function doing the actual calculation
// re_lsf		reinitialized level set function
// lsf 			initial level set function 
// shift 		index shift matrix
// r,c,p 		matrix dimension array
// num_ele 		total number of elements
// dx,dy,dz 	grid spacing
void Reinitialization(double *re_lsf, const double *lsf, const shift_mat * shift, 
	const int rows, const int cols, const int pages, const int num_ele, const int dx, const int dy, const int dz);

#endif
