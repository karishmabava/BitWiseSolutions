/* Question: Check whether a given number is even or odd
Given a number, check whether it is even or odd.

Examples:

input: 2 
output: even

input: 5
output: odd 

Solution: Simply check the LSB */

// Complexity O(1)
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

int main(){

	int n;
	printf("Enter the number: ");
	scanf("%d", &n);

	if(n&(1<<0)){
		printf("Odd\n");
	} else {
		printf("Even\n");
	}

	return 1;
}
