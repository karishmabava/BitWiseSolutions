/* Question: Equal Sum and XOR
Given a positive integer n, find count of positive integers i such that 0 <= i <= n and n+i = n^i

Input  : n = 7
Output : 1
Explanation:
7^i = 7+i holds only for only for i = 0
7+0 = 7^0 = 7


Input n = 12
Output: 4
12^i = 12+i hold only for i = 0, 1, 2, 3
for i=0, 12+0 = 12^0 = 12
for i=1, 12+1 = 12^1 = 13
for i=2, 12+2 = 12^2 = 14
for i=3, 12+3 = 12^3 = 15 */

/* Solution: As we know that x+y = x^y + x&y, this means that if we compare with the question
 * which is asking us to calculate if x^y = x+y, which only holds true x&y = 0; */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

int main(){

	int x;
	printf("Enter the first number: ");
	scanf("%d", &x);

	int num = x, count=0;
	while(num){
		count++;
		num = num/2;
	}
	int ans=0;
	for(int i=0; i<count; i++){
		if((x&i) == 0){
			ans++;
		}
	}

	printf("Answer is %d\n", ans);

	return 1;
}
