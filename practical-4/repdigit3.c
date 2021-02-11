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
		printf("\nDigits: \t ");

		for (int i = 0; i < 10; i++) {	
			printf("\t %d",i);
		}

		// Second row
		printf("\nOccurrences: \t"); 
		while (n > 0) {
			digit = n % 10;
			if (digit_seen[digit] > 0) {
				digit_seen[digit]++;
			} else digit_seen[digit] = 1;
				
			n /= 10; 
		}
	
		for (int i = 0; i < 10; i++) {
			printf("\t %d", digit_seen[i]);
		}
	
		printf("\n\n\n");

	} while (in > 0);
	return 0;
}

