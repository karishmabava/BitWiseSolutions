/* Question: Calculate XOR from 1 to n.
Given a number n, the task is to find the XOR from 1 to n.

Examples :

Input : n = 6
Output : 7
// 1 ^ 2 ^ 3 ^ 4 ^ 5 ^ 6  = 7

Input : n = 7
Output : 0
// 1 ^ 2 ^ 3 ^ 4 ^ 5 ^ 6 ^ 7 = 0

Solution: How does this work?
When we do XOR of numbers, we get 0 as XOR value just before a multiple of 4. This keeps repeating before every multiple of 4.

Number Binary-Repr  XOR-from-1-to-n
1         1           [0001]
2        10           [0011]
3        11           [0000]  <----- We get a 0
4       100           [0100]  <----- Equals to n
5       101           [0001]
6       110           [0111]
7       111           [0000]  <----- We get 0
8      1000           [1000]  <----- Equals to n
9      1001           [0001]
10     1010           [1011]
11     1011           [0000] <------ We get 0
12     1100           [1100] <------ Equals to n
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

// Complexity O(1)
int computeXOR(int n)
{
    // If n is a multiple of 4
    if (n % 4 == 0)
        return n;
 
    // If n%4 gives remainder 1
    if (n % 4 == 1)
        return 1;
 
    // If n%4 gives remainder 2
    if (n % 4 == 2)
        return n + 1;
 
    // If n%4 gives remainder 3
    return 0;
}


int main(){

	int x;
	printf("Enter the number: ");
	scanf("%d", &x);

	int k = computeXOR(x);	
	printf("Result is %d\n", k);

	return 1;
}
