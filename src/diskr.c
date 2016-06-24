#include "diskr.h"

#include <math.h>

struct skr diskr(float a, float b, float c)
{
	struct skr root;

	const float d = b * b - 4 * a * c;


	if(d == 0){
		root.x1 = (-b / (2 * a));
	}
	else{
	if(d < 0){
		root.end = END;
	}
	else{

		root.x1 = (-b + sqrt(d)) / (2 * a);
		root.x2 = (-b - sqrt(d)) / (2 * a);
	}
	}

	return root;
}
