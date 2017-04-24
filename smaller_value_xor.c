/* Question: Count smaller values whose XOR with x is greater than x
Given a integer ‘x’, find the number of values of ‘a’ satisfying the following conditions:

a XOR x > x
0 < a < x
Examples:

Input : x = 10 
Output : 5
Explanation: For x = 10, following 5 values
             of 'a' satisfy the conditions:
             1 XOR 10 = 11
             4 XOR 10 = 14
             5 XOR 10 = 15
             6 XOR 10 = 12
             7 XOR 10 = 13 

Input : x = 2
Output : 1
Explanation: For x=2, we have just one value
             1 XOR 2 = 3.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

// Solution is simple, for every ith bit to be zero in number, there are possible 
// 2^i possible numbers who will satisfy x XOR num > x, so as soon as we spot 0,
// Increment 2^n, 1010 represents 10, so for ever 0 if we flip we will get greater than
// 10, and there are 2^ (place of oth bit) possible combinations

// COmplexity O(log n)
int main(){

	int x;
	printf("Enter the number");
	scanf("%d", &x);
	
	int count = 0, n=1;
	// we will go through the bits in X
	while(x!=0){

	   // First we should see the last bit of the x in every iteration.
		// if it is set then increment count by 2^n
		if(x%2 == 0){
			count = count+n;
		}
		
		n *= 2; 
		x = x/2;
	}

	printf("Count is %d\n", count);
}
