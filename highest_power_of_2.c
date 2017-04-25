/* Highest power of 2 less than or equal to given number
Given a number n, find the highest power of 2 that is smaller than or equal to n.

Input : n = 10
Output : 8

Input : n = 19
Output : 16

Input : n = 32
Output : 32 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

/* Solution: Simply count the number of bits and then 
 * go from right and then calucalte that 2 power of that index
 */

int main(){

	int x;
	printf("Enter the number: ");
	scanf("%d", &x);

	int n = x;
	int count=0;
	while(n > 0){
		  count++;
		  n = n/2;
	}

	int i=0;
	for(i=count; i>0; i--){
		if(x&(1<<i)){
		   break;
		}
	}

	printf("I is %f\n", pow(2,i));

	return 1;
}
