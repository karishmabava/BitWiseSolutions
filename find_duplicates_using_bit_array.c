#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>


int main(){

	int arr[] = {1, 5, 1, 10, 5, 10};

	int32_t x = 0;

	int num = sizeof(arr)/sizeof(arr[0]);

	int count=0;
	for(int i=0; i<num; i++){
		if(x & (1<<arr[i])){
		   count++;
		   printf("Duplicate element is %d\n", arr[i]);
		} else {
			x |= 1 << arr[i];
		}
	}
	return 1;
}
