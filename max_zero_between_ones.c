/*Maximum 0’s between two immediate 1’s in binary representation
Given a number n, the task is to find the maximum 0’s between two immediate 1’s in binary representation of given n. Return -1 if binary representation contains less than two 1’s.

Examples:

Input : n = 47
Output: 1
// binary of n = 47 is 101111

Input : n = 549
Output: 3
// binary of n = 549 is 1000100101

Input : n = 1030
Output: 7
// binary of n = 1030 is 10000000110

Input : n = 8
Output: -1
// There is only one 1 in binary representation
// of 8. */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

// Complexity O(n)

int main(){

	int num, n;
	
	printf("Enter the number: ");
	scanf("%d", &num);
	
	n = num;  // We dont want to disturb num, so taking temporary variable n
	int count=0;
	while(n){
		count++;
		n = n/2;
	}

	int i, count_zero = 0, prev=0, flag =0;

	for(i=0; i<count; i++){
		if(num&(1<<i)){
			if(count_zero < i - prev ){
			   count_zero = i - prev;
			} 
				prev = i;
				flag++;
		}
	}

	// This shows that loop only iterated one time this is why there is only one time
	// when i and prev became equal.
	if(flag == 1){
	   count_zero = -1;
	}else {
		count_zero = count_zero - 1; // Because we started with 0 index in for loop
	}

	printf("Zero count is %d\n", count_zero);
	return 1;
}
