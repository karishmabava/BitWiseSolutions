/* Count trailing zero bits using lookup table
Given an integer, count the number of trailing zeroes. For example, for n = 12, its binary representation is 1100 and number of trailing zero bits is 2.

Examples:

Input : 8
Output : 3
Binary of 8 is 1000, so there are theree
trailing zero bits.

Input : 18
Output : 1
Binary of 10 is 10010, so there is one
trailing zero bit.*/

// Complexity O(n)
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

int main(){

	int x;
	printf("Enter the number");
	scanf("%d", &x);

	int count=0;
	//Simply traversing the number and counting 0 bits from the left side
	// assuming 32 bit integer
	for(int i=0; i<32; i++){
		if((x&(1<<i)) !=0 ){
			break;
		}

		count++;
	}

	printf("Bits are %d\n", count);
	return 0;
}
