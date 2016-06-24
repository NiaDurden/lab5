#include <ctest.h>

#include <diskr.h>

CTEST(test, dos_roots) {

	const float a = 1;
	const float b = 5;
	const float c = 6;

	const struct skr roots = diskr(a, b, c);

	const struct skr dos_roots = {-2, -3};

	ASSERT_DBL_NEAR(dos_roots.x1, roots.x1);
	ASSERT_DBL_NEAR(dos_roots.x2, roots.x2);
}

CTEST(test, uno_roots) {

        const float a = 1;
        const float b = 2;
        const float c = 1;

        const struct skr roots = diskr(a, b, c);

        const struct skr uno_roots = {-1};

        ASSERT_DBL_NEAR(uno_roots.x1, roots.x1);
        ASSERT_DBL_NEAR(uno_roots.x2, roots.x2);
}

CTEST(test, ohne_roots){

	const float a = 1;
	const float b = 0;
	const float c = 1;

	const struct skr roots = diskr(a, b, c);

	const struct skr ohne_roots = {END};

	ASSERT_DBL_NEAR(ohne_roots.end, roots.end);
}
