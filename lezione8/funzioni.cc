#include "funzioni.h"

//______________________________
void scambia1(double &a, double &b)
{
	double dep = b;
	b = a;
	a = dep;
}

//______________________________
void scambia2(double *a, double *b)
{
	double dep = *b;
	*b = *a;
	*a = dep;
}
