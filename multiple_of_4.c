/* Question: Multiples of 4 (An Interesting Method)
Given a number n, the task is to check whether this number is a multiple of 4 or not without using +, -, * ,/ and % operators.

Examples:

Input: n = 4  Output - Yes
       n = 20 Output - Yes
       n = 19 Output - No


Solution: Any number divisible by 4 will always have last two bits as zero 
similarly any number divisible by 8 will always have last three bits as zero
*/

// Complexity O(1)
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

	int n;
	printf("Enter the number: ");
	scanf("%d", &n);

	if(!(n&(1<<0)) && !(n&(1<<1))){
		printf("Yes\n");
	} else {
		printf("No\n");
	}

	return 1;
}
