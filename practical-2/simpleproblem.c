#include <math.h>
#include <stdio.h>

// 1: I have removed the original comments and added my own.

int main() {
	int num, num_copy, count=0; // num and num_copy are our upcoming input; count is ready to take the number of digits in this input.
	printf("Enter an integer number: "); // feedback for the user
	scanf("%d",&num); // the computer expects us to enter a number to record in the variable 'num'.
		
	num_copy = num; // the copy of 'num' will be changed.  We have to save the original beforehand.
	while(num_copy){  // num_copy will eventually reach zero, since we are dividing by ten.  The program will continue after this happens.
		num_copy = num_copy / 10;  // dividing this base-ten number by ten.
		count++; // each increment of 'count' represents a digit in the integer.
	}

	num_copy = num; // restoring num_copy from 0 to 'num'.
	printf("Digits of given number are: ");  // feedback.  The rest of this statement belongs in the while loop.
	
	int x; // this variable stores each pow calculation for a short time.
	
	while(count){
		count--;  // of course we only have a set number of digits to display.  The loop ends whenever we run out.
		x = (int) pow(10, count);  // ie 10^count, 10 followed by 0 to 9 zeroes.
		printf("%d", num_copy / x); // feedback: without new lines or spaces, this will appear to be one number.  x is so large, this division will reduce num_copy to one digit.
		num_copy = num_copy % x; // this shaves the most significant figure from the copy of the integer, for the next loop.
	}
}

// 2: pow(a,b) is a math.h library function which returns a to the power of b.

// 3: you can crash the program by enteriing the wrong data type in the scanf statement.
