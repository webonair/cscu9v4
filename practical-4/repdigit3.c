#include <stdbool.h>
#include <stdio.h>

int main(void) {
	long in;
	
	do {
		int digit_seen[10] = {0};
		int digit;
		
		printf("Enter a number: ");
		scanf("%ld", &in);

		if (in < 1) return 0;

		long n = in;
	
		// First row
		printf("\nDigits:      ");

		for (int i = 0; i < 10; i++) {	
			printf("%4d",i);
		}

		// Second row
		printf("\nOccurrences: "); 
		while (n > 0) {
			digit = n % 10;
			if (digit_seen[digit] > 0) {
				digit_seen[digit]++;
			} else digit_seen[digit] = 1;
				
			n /= 10; 
		}
	
		for (int i = 0; i < 10; i++) {
			if (digit_seen[i] > 0) {
				printf("%4d", digit_seen[i]);
			} else {
				printf("    ");
			}
		}
	
		printf("\n\n\n");

	} while (in > 0);
	return 0;
}

