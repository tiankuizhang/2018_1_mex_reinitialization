// computing routine for reinitialization
#include "mex.h"
#include "mexReinitialization.h"

void Reinitialization(double *re_lsf, const double *lsf, const shift_mat * shift, 
	const int rows, const int cols, const int pages, const int num_ele, const int dx, const int dy, const int dz)
{
	mexPrintf("Hello, c mex!\n");

	for(int i=0;i<5;i++)
		mexPrintf("new line \n");
}