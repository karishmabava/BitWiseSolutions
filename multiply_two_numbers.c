/*Questions: Multiplication of two numbers with shift operator
For any given two numbers n and m, you have to find n*m without using any multiplication operator.

Examples:

Input: n = 25 , m = 13
Output: 325

Input: n = 50 , m = 16
Output: 800
*/


// COmplexity O(log n)
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

	int m, n;

	printf("Enter first number: ");
	scanf("%d", &m);

	printf("Enter second number: ");
	scanf("%d", &n);


	int ans =0, count=0;
	// Simply go to the number and shift (left shit) the multipler (n)
	// so that you can accomadate those bits in y to make product of m and n
	while(m){
	
		// If LSB is set then add add those number to ans
		// It means that the number has given 1 after divisible by 2
		// Which means that all other numbers except m%2 can be shifted
		if(m%2 == 1){
			ans +=  n << count;
		}

		count++;
		m = m/2;
	}

	printf("Answer is %d\n", ans);

	return 1;
}
