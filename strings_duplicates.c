/* Question: Efficiently check if a string has duplicates without using any additional data structure
Implement an space efficient algorithm to determine if a string (of characters from ‘a’ to ‘z’) has all unique characters or not. Use additional data structures like count array, hash, etc is not allowed.

Expected Time Complexity : O(n)

Input  : str = "aaabbccdaa"
Output : No

Input  : str = "abcd"
Output : Yes
*/

// Solution: So we are going to take index of each character of string,
// Lets take an instance of "a", index value is 0, we will see if the bit is being set for value 0
// if yes then it is duplicate.

// Complexity O(n)
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

#define INDEX(c) (char)c - 'a'

int main(){

	// For simplicity, we are using, literal strings, 
	// You can very well take user input
	char *str  = "aaabbccdaa";

	int index, test_num=0, len = strlen(str);
	// Index max can go 26 so 32bit integer is enough
	for(int i=0; i<len; i++){
	    index = INDEX(str[i]);
		 if(test_num & (1 << index)){
			printf("Duplicate string is %c at index: %d\n", str[i], i); 
		  } else {
		  	test_num |= (1 << index);
		  }
	 }

	return 1;
}		
