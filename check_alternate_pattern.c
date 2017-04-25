/*Check if a number has bits in alternate pattern
Given an integer n > 0, the task is to find whether this integer has an alternate pattern in its bits representation. For example- 5 has an alternate pattern i.e. 101.
Print “Yes” if it has an alternate pattern otherwise “No”. Here alternate pattern can be like 0101 or 1010.

Examples:

Input :  15
Output :  No
Explanation: Binary representation of 15 is 1111.

Input :  10
Output :  Yes
Explanation: Binary representation of 10 is 1010.
*/


// Complexity O(log n)
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool check_alternative_pattern(int n);

int main(){

	int n;
	printf("Enter the number : ");
	scanf("%d", &n);

	if(check_alternative_pattern(n)){
		printf("YES\n");
	} else {
		printf("NO\n");
	}
}
bool check_alternative_pattern(int n){

	if(n==0){
		return true;
	}

	// Creating mask for the number according to number length
	// For example: 1010 --> 10 will have a mask only 1111. 11010 will
	// have mask of 11111 and so on	
	int temp = n, x=0, i=0;
	while(temp > 0){

		x += pow(2, i);
		i++;
		temp = temp/2;
	}

	// xor variable gives us the flipped bit number
	// For example: 1010 will have 0101.
	// Clearly if the xor ^ n is 0 means they DO NOT have bits on alternative position
	// else if it is zero means they do have bits on alternative places.
	int xor = n ^ x;

	if(xor ^ n){
		printf("False\n");
	} else {
		printf("True\n");
	}

	return true;
}
