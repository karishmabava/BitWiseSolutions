#include<stdio.h>


int main(){

	int x=10,y=20;
	
	printf("\n Original Nos Are: x is %d and y is %d\n",x,y);

	x=x^y;
	y=x^y;
	x=x^y;
	
	printf("\n Swapped Nos Are: x is %d and y is %d\n",x,y);

	return 0;
}
