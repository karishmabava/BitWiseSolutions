/* Question: Compare two integers without using any Comparison operator
Given two integers A & B. Task is to check if A and B are same or not without using comparison operators.

Examples:

Input : A = 5 , B = 6
Output : 0

Input : A = 5 , B = 5 
Output : 1

Note : 1 = "YES" and 0 = "NO" */

// Solution is pretty simple, we just have to xor two numbers

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

	int a, b;

	printf("Enter first number: ");
	scanf("%d", &a);

	printf("Enter Second number: ");
	scanf("%d", &b);

	if((a^b) ==  0){ 
		printf("YES\n");
	} else {
		printf("NO\n");
	}

	return 1;
}
