#include <stdio.h>

int main(void) {
	int num1, denom1, num2, denom2;
	float result_num, result_denom, decimal;

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
		result_num = num1 * denom2 + num2 * denom1;
		result_denom = denom1 * denom2;
	} else if (addOrMult == 'm') {
		// Task 1.
		result_num = num1 * num2;
		result_denom = denom1 * denom2;
	}

	// Task 5.
	decimal = result_num / result_denom;
	printf("The result is %.0f/%.0f\n", result_num, result_denom);
	printf("... which is %.2f.\n", decimal);

	return 0;
}
