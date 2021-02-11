#include <math.h>
#include <stdio.h>


int main() {
	int num, num_copy, count=0;
	printf("Enter an integer number: ");
	scanf("%d",&num);
		
	num_copy = num;
	while(num_copy){
		num_copy = num_copy / 10;
		count++;
	}

	num_copy = 0;

	printf("Reverse of given number is: ");
	
	int x;
	
	while(count) {
		x = num % 10;
		num_copy = (num_copy * 10) + x;
		count--;
		num = num / 10;
	}

	printf("\n%d", num_copy);
}
