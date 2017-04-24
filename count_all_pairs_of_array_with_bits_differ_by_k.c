/* Question: Count all pairs of an array which differ in K bits
Given an array of size n and integer k, count all pairs in array which differ in exactly K bits of binary representation of both the numbers.

The input arrays have elements with small values and possibly many repetitions.

Input: arr[] = {2, 4, 1, 3, 1}
       k = 2       
Output: 5
Explanation:
There are only 4 pairs which differs in 
exactly 2 bits of binary representation:
(2, 4), (1, 2) [Two times] and (4, 1)
[Two times]

Input  : arr[] = {2, 1, 2, 1}
         k = 2
Output :  4
*/

// There is no shortcut way to escape this complexity.
// We have to check elements and take xor of each other and count bits if
// it matches to two. There is another shortcut methods for this question
// Where you take max element from the array and then take the xor to see the diff is k or not. 
// This method is only useful for short elements array and not general enough, that has complexity 
// of O(n^2)

// Complexity O(n^2 * logn)
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>


int bitcount(int n){

	int count=0;
		
	while(n != 0){
		if(n&1){
		   count++;
		}

		n = n >> 1;
	}
	
	return count;
}

int main(){

	int k = 2;
    int arr[] = {2, 4, 1, 3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

	for(int i=0; i<n-1; i++){

		for(int j=i+1; j<n; j++){
			if(bitcount(arr[i] ^ arr[j]) == k){
			   printf("Pair exists at i:%d and j:%d position\n", i, j);
			}
		}
	}

	return 1;
}
