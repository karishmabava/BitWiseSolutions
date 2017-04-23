/* Question: Given two positive integers A and B, we can change at most K bits in both the numbers to make OR of them equal to a given target number T. In the case of multiple solutions try to keep A as small as possible.

Examples:

Input : A = 175,
        B = 66,
        T = 100,
        K = 5
Output : A = 36
         B = 64
Initial bits of A = 1010 1111
Changed bits of A = 0010 0100
Initial bits of B = 0100 0010
Changed bits of B = 0100 0000
OR of changed Bits = 0110 0100
Which has decimal value equal to Target T.

Input : A = 175,
        B = 66,
        T = 100,
        K = 4
Output : Not Possible
It is not possible to get OR of
A and B as T, just by changing K bits. */

// Solution is simple, all we are doing here is taking OR between x and y and then comparing with z to see if
// number of bits to be flipped is in between k range

// Complexity O(n);
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

int main(){

	// x = num1
	// y = num2
	// Z =  target
	// k = number of operation at max 
	int x, y, z, k;
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);
	scanf("%d", &k);

	int count=0;
	for(int i=0; i<32; i++){
		int k = ((x&(1<<i)) | (y&(1<<i)));
		if(k != (z&(1<<i))){
			count++;
		}
	}
	
	if(count >= k){
		printf("Not possible\n");
	} else {
		printf("Possible\n");
	}
	return 1;
}
