/* Question: Given an array A[] and a number x, check for pair in A[] with sum as x
Write a C program that, given an array A[] of n numbers and another number x, determines whether or not there exist two elements in S whose sum is exactly x. 
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

// Using hash see if the substract hash is already set

int substract(int x, int y){

    int borrow = 0;

    while(y != 0){

          borrow = (~x)&y;
          x = x^y;
          y = borrow << 1;
    }

    return x;
}

int main(){

	int num_elem;
	printf("Enter the number of elements in array: ");
	scanf("%d", &num_elem);

	int *arr = (int *)malloc(sizeof(int) * num_elem);
	memset(arr, 0, sizeof(int) * num_elem);

	for(int i=0; i<num_elem; i++){
		scanf("%d", &arr[i]);
	}

	// We are using one sum only,
	// If array is required then simply iterate for every element in sum array
	int sum;
	printf("Enter sum: ");
	scanf("%d", &sum);
	
	// Finding the max;
	int max = 0;
	for(int i=0; i<num_elem; i++){
		if(max < arr[i]){
		   max = arr[i];
		}				
	}
	
	// Iterating through the elements to see if the pair exisits
	// We will use hash to see if the pair exists.
	int *hash = (int *)malloc(sizeof(int) * max);
	memset(hash, 0, sizeof(int) * max);

	for(int i=0; i<num_elem; i++){
		int temp = substract(sum, arr[i]);	
		if(temp >= 0 && hash[temp] == 1){
		   printf("Pair exists\n");
		}
		hash[arr[i]] = 1;
		
	}

	free(hash);
	return 1;
}
