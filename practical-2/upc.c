/*
 * UPC verification tool
 * 2721415
 * 11 February 2021
 */

#include <stdio.h>

int main() {
	int d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,dCheck;

	printf("Please enter eleven digits: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11);

	// This logic follows the instructions.
	int oddproduct = d1 + d3 + d5 + d7 + d9 + d11;
	int evenproduct = d2 + d4 + d6 + d8 + d10;
	
	dCheck = 10 - (((oddproduct * 3) + evenproduct) % 10);

	printf("\n%d\n", dCheck);

	return 0;
}
