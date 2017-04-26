/* XOR counts of 0s and 1s in binary representation
Given a number, the task is to find XOR of count of 0s and count of 1s in binary representation of a given number.
Examples:

Input  : 5
Output : 3
Binary representation : 101
Count of 0s = 1, 
Count of 1s = 2
1 XOR 2 = 3.

Input  : 7
Output : 3
Binary representation : 111
Count of 0s = 0
Count of 1s = 3
0 XOR 3 = 3.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

// Complexity O(n)

int main(){

	int n;
	
	printf("Enter the number: ");
	scanf("%d", &n);

	int num = n, count=0;
	while(num){
		count++;
		num /= 2;
	}
	
	int count_ones=0;
	for(int i=0; i<count; i++){
		if(n&(1<<i)){
		   count_ones++;
		}
	}

	int ans = count_ones ^ (count - count_ones);
	printf("Xor is %d\n", ans);
	
	return 1;
}
