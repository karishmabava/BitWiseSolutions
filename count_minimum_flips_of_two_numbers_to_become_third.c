/* Question: Count minimum bits to flip such that XOR of A and B equal to C
Given a sequence of three binary sequences A, B and C of N bits. Count the minimum bits required to flip in A and B such that XOR of A and B is equal to C. For example:-

Input: N = 3
       A = 110
       B = 101
       C = 001
Output: 1
We only need to flip the bit of 2nd position
of either A or B, such that A ^ B = C i.e., 
100 ^ 101 = 001
Recommended: Please try your approach on {IDE} first, before moving on to the solution.

A Naive approach is to generate all possible combination of bits in A and B and then XORing them to Check whether it is equal to C or not. Time complexity of this approach grows exponentially so it would not be better for large value of N.*/


// Complexity O(n)
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

int main(){

	int x, y, z;

	printf("Enter first number");
	scanf("%d", &x);

	printf("Enter Second Number");
	scanf("%d", &y);

	printf("Enter third number");
	scanf("%d", &z);

	int xor = x ^ y;

	// Now we have to find out the number of bits difference
	// between xor and C
	
	/* Note: The reason we are defining all these parameters and explaining
	 * is because we want reader to understand the operations,
	 * this can be done in one line also. */
	int num_bits = xor ^ z;
	
	// Now we will count the number of 1s in this number
	// Which will give us the bit difference and this is the 
	// minumum number of bits to be flapped to become z
	int count=0;
	for(int i=0; i < 32; i++){
		if(num_bits&(1<<i)){
		   count++;			
		}
	}

	printf("Minimum number of bits required to be flipped is %d\n", count);

	return 1;
}


