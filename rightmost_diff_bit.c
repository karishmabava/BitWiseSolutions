/* Program to find the Rightmost Different Bit between two numbers*/

#include <stdio.h>
#include <math.h>


double log2(double n){
	return (log(n)*M_LOG2E);
}


int rightmostdiffbit(int m,int n){

	int x = m^n;

	if(x==0)
		return 0;

	int bit = x ^ (x & (x-1));

return (log2(bit)+1);
}




int main(){

	int m = 11, n = 9;
	printf("The rightmost different bit is:%d\n",rightmostdiffbit(m,n));
	return 0;
}
