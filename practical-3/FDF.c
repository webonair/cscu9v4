#include <stdio.h>

int main () {
	float x,y;
	int i;

	scanf("%f%d%f", &x, &i, &y);
	printf("x = %f; i = %d; y = %f\n", x, i, y);
	return 0;
}

/*
 * ~~~ Test Results ~~~
 * Input:		10.3 5.6 100
 * Expected output:	x = 10.3; i = 5; y = 0.61
 * Actual output:	x = 10.300000; i = 5; y = 0.600000
 * I'm happy with that.  The only unexpected thing is that y is rounded down to the first decimal point.
 */
