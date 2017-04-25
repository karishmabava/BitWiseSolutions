/*Smallest power of 2 greater than or equal to n
Write a function that, for a given no n, finds a number p which is greater than or equal to n and is a power of 2.

    Input : n = 5
    Output: 8     

    Input  : n = 17
    Output : 32     

    Input  : n = 32
    Output : 32     
There are plenty of solutions for this. Let us take the example of 17 to explain some of them.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

// Complexity O(log n)
int main(){

	int x;
	
	printf("Enter the number : ");
	scanf("%d", &x);
	
	// If the number is divisible by 2 then
	// it means that this the smallest power and the number itself is answer
	if(x%2==0){
	   printf("%d\n", x);
	}else {
		int n = x, count=0;
		while(n){

			count++;
			n = n/2;
		}
		printf("%f\n", pow(2, count));
	}


	// Count shows that number of bits are 3.
	// Means you have to set the 4th bit get the smaller value.

	return 1;
}

