#include <stdbool.h>
#include <stdio.h>

int main(void) {
	int digit_seen[10] = {0};
	int digit;
	long n;
	
	printf("Enter a number: ");
	scanf("%ld", &n);
	
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

	printf("\n");

}

