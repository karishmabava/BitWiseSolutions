#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>


int main(){

	int x;
	printf("Enter the number");
	scanf("%d", &x);

	int count=0, i=0;
	// Simply traversing the number
	while(x != 0){
	
		if(x& (1<<i)){
			count++;
		}	
		
		x = x/2;
	}	

	printf("Count is %d\n", count);
}
