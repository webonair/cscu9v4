#include <stdbool.h>
#include <stdio.h>

int main(void) {
	int digit_seen[10] = {0};
	int digit;
	long n;
	
	printf("Enter a number: ");
	scanf("%ld", &n);
	
	while (n > 0) {
		digit = n % 10;
		if (digit_seen[digit] > 0) {
			digit_seen[digit]++;
			printf("%d seen %d times\n", digit, digit_seen[digit]);	
		} else digit_seen[digit] = 1;
		
	
		
		n /= 10; 
	}

}

