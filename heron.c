/* This small program calculates the multiplicative inverse of some number a. The
guess x has to be close to the correc answer to assure convergence. First primitive
program as it is done in the book. */
#include <tgmath.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	double const eps = 1E-9;
	double const a = 35.0;
	double x = 0.01;

	while (fabs(1.0 - a*x) >= eps) {
		printf("x = %f \nerror = %f\n", x, fabs(1.0 - a*x));
		getchar();
		x *= (2.0 - a*x);
	}

	return EXIT_SUCCESS;
}

