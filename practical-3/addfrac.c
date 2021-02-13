#include <stdio.h>

int main(void) {
	int num1, denom1, num2, denom2, result_num, result_denom;
	float ncopy, dcopy, decimal;

	// Task 2.
	char addOrMult;

	printf("(a)dd or (m)ultiply?: ");
	scanf("%1c", &addOrMult);

	// These spaces constitute task 3.
	printf("Enter the first fraction: ");
	scanf("%d / %d", &num1, &denom1);

	printf("Enter the second fraction: ");
	scanf("%d / %d", &num2, &denom2);

	if (addOrMult == 'a') {
		result_num = (num1 * denom2) + (num2 * denom1);
		result_denom = denom1 * denom2;
	} else if (addOrMult == 'm') {
		// Task 1.
		result_num = num1 * num2;
		result_denom = denom1 * denom2;
	}

	int gcd = findGcd(result_num, result_denom);

	result_num /= gcd;
	result_denom /= gcd;

	// Task 5.
	
	ncopy = result_num;
	dcopy = result_denom;
	decimal = ncopy / dcopy;

	printf("The result is %d/%d\n", result_num, result_denom);
	printf("... which is %.2f.\n", decimal);

	return 0;
}

// Task 6: Euclidean algorithm
int findGcd(int a, int b) {
	// Debug
	//printf("a %d b %d\n",a,b);

	while (b > 0) {
		int r = a % b;
		a = b;
		b = r;
	}

	return a;
}
