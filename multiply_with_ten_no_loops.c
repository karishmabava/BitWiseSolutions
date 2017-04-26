/* Question: Multiply a number with 10 without using multiplication operator
Given a number, the task is to multiply it with 10 without using multiplication operator?

Examples:

Input : n = 50
Output: 500
// multiplication of 50 with 10 is = 500

Input : n = 16
Output: 160
// multiplication of 16 with 10 is = 160
*

Solution: 10 = 2 + 8, so n * 10 = n * (2+8) which means that shift the bits of the number
by 1 and 3 */

// Complexity O(1)
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

int multiply_with_10(int n){

	return ((n << 1) + (n << 3));

}

int main(){

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int k = multiply_with_10(n);
    printf("Ans is %d\n", k);

	return 1;
}
