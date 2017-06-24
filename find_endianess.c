#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int check_for_endianness(){

	unsigned int x = 1;
	char *c = (char *)&x;
	return (int)*c;
}


int main(){
	
	if(!check_for_endianness()){
		printf("Machine is big endian\n");
	} else {
		printf("Maching is little endian\n");
	}

}
