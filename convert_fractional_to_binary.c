/* Question: Convert decimal fraction to binary number
Given an fraction decimal number n and integer k, convert decimal number n into equivalent binary number up-to k precision after decimal point.

Input: n = 2.47, k = 5
Output: 10.01111

Input: n = 6.986 k = 8
Output: 110.11111100
Recommended: Please try your approach on {IDE} first, before moving on to the solution.

A) Convert the integral part of decimal to binary equivalent

Divide the decimal number by 2 and store remainders in array.
Divide the quotient by 2.
Repeat step 2 until we get the quotient equal to zero.
Equivalent binary number would be reverse of all remainders of step 1.
B) Convert the fractional part of decimal to binary equivalent

Multiply the fractional decimal number by 2.
Integral part of resultant decimal number will be first digit of fraction binary number.
Repeat step 1 using only fractional part of decimal number and then step 2.
C) Combine both integral and fractional part of binary number.
*/

// Solution: This solution only considers two places after decimal, if you want to increase it
// then please make it according via changing 0.3f to appropriate number

// Complexity O(n);
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

void bin(int n){	
	if(n > 1){
	   bin(n/2);	
	}

	printf("%d", n%2);
}

int main(){

	float num;

	printf("Enter the number");
	scanf("%f", &num);

	char *temp = (char *)malloc(sizeof(char) * 200);
	memset(temp, 0, sizeof(char) * 200);
	snprintf(temp, 200, "%0.2f", num);

	char *str = (char *)malloc(sizeof(char) * 200);
	memset(str, 0, sizeof(char) * 200);

	char *result = (char *)malloc(sizeof(char) * 500);
	memset(result, 0, sizeof(char) * 500);

	int k=0, i=0;
	int len = strlen(temp);
	while(len > 0){
		if(temp[i] == '.'){
			bin(atoi(str));
			memset(str, 0, 200);
			k=0;
			i++;
		}
		str[k] = temp[i];
		k++;
		i++;
		len--;
	}
	
	printf("Str is %s\n", str);
	printf(".");	
	bin(atoi(str));
	printf("\n");
	return 1;
}
