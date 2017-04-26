/* Length of the Longest Consecutive 1s in Binary Representation
Given a number n, find length of the longest consecutive 1s in its binary representation.

Examples:

Input : n = 14
Output : 3
The binary representation of 14 is 1110.

Input : n = 222
Output : 4
The binary representation of 222 is 11011110. 

Solution: Simply traverse the bits and keep an eye on the count */

// Complexity O(n)
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

	int num = n, count = 0;
	while(num){
		count++;
		num /= 2;
	}

	int curr_count=0, ans_count=0;
	for(int i=0; i<=count; i++){
		if(n&(1<<i)){
			curr_count++;
		} else {
			if(ans_count < curr_count){
				ans_count = curr_count;
			}
			curr_count = 0;
		}
	}

	printf("Answer is %d\n", ans_count);
	return 1;
}
