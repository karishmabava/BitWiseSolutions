/* Question: Check if bits of a number has count of consecutive set bits in increasing order
Given a integer n > 0, the task is to find whether in the bit pattern of integer count of continuous 1’s are in increasing from left to right.
Examples:

Input:19
Output:Yes
Explanation: Bit-pattern of 19 = 10011,
Counts of continuous 1's from left to right 
are 1, 2 which are in increasing order.

Input  : 183
Output : yes
Explanation: Bit-pattern of 183 = 10110111,
Counts of continuous 1's from left to right 
are 1, 2, 3 which are in increasing order.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <limits.h>
/* Solution: One solution very well could be to traverse from left to right
 * and see if the numbers are increasing by compareing the last increasing count
 * to the previous one. If you have then print yes or no
 * BUT the efficient solution is to traverse the number bit by a while loop and dividing
 * it by 2 to get the remainder and filling bits from left side. Increase the count and 
 * compare with the previous count to see if it is in increasing order.
 */

#include <stdlib.h>
#include <stdbool.h>

bool areSetBitsIncreasing(int n)
{
    // Initialize previous count
    int prev_count = INT_MAX;
 
    // We traverse bits from right to left
    // and check if counts are decreasing
    // order.
    while (n > 0)
    {
        // Ignore 0s until we reach a set bit.
        while (n > 0 && n % 2 == 0)
           n = n/2;
 
        // Count current set bits
        int curr_count = 1;
        while (n > 0 && n % 2 == 1)
        {
            n = n/2;
            curr_count++;
        }
 
        // Compare current with previous and
        // update previous.
        if (curr_count >= prev_count)
            return false;
        prev_count = curr_count;
    }
 
    return true;
}

int main(){


	int n, flag = 0;
	printf("Enter the number: ");
	scanf("%d", &n);
	
	if(areSetBitsIncreasing(n)){
		printf("YES\n");
	} else {
		printf("NO\n");
	}

	
	return 1;
}
