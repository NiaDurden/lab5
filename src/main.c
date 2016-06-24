#include "diskr.h"

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	const double a = atof(argv[1]);
	const double b = atof(argv[2]);
	const double c = atof(argv[3]);

	diskr(a, b, c);

	return 0;
}
