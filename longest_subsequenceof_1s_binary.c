/* Find longest sequence of 1’s in binary representation with one flip
Give an integer n. We can flip exactly one bit. Write code to find the length of the longest sequence of 1 s you could create.

Examples:

Input : 1775         
Output : 8 
Binary representation of 1775 is 11011101111.
After flipping the highlighted bit, we get 
consecutive 8 bits.

Input : 12         
Output : 3 

Input : 15
Output : 5
*/


/* Solution: Please see the following steps:
			 1. First convert into binary string. (logn)
			 2. Find the largest 1s sequence in the string.
			 3. Find the starting point and ending point of that sequence.
			 3. Find the left side largest if exists so that the longest can be formed by just flipping the
				adjacent bit of the start index and same on right hand side, for last index.
			 4. Count the number 
*/ 

// COmplexity O(logn)
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <assert.h>

struct node {

	int count;
	int start_index;
	int last_index;
	int bit_index;
};

/* Function to convert a decinal number to binary number */
long decimalToBinary(long n) {
    int remainder;
 long binary = 0, i = 1;

    while(n != 0) {
        remainder = n%2;
        n = n/2;
        binary= binary + (remainder*i);
        i = i*10;
    }
    return binary;
}

struct node * longest_sequence_1s(char *buff, int str_len){

	struct node *result = (struct node *)malloc(sizeof(struct node));
	memset(result, 0, sizeof(struct node));

	int len = str_len;
	int temp= 0, i=0, count=0, start_index = 0, last_index = 0;
	int right_count=0;

	while(len >= 0){
		 if(buff[i] == '1'){
			 if(count == 0){
				// This means the index starts from here.
				start_index = i;
			 }	
			 count++;
		 } else {

			if(temp < count){
				temp = count;
				// Update last index
				last_index = i;
			}		
			count = 0;
		 }
		i++;
		len--;
	}

	result->count = count;
	result->start_index = start_index;
	result->last_index = last_index-1;  // WE are inclusing last_index two times in while loop

	int left_count=0;
	 
	// Couting 1's sequence from left side
	 for(int j=start_index - 2; j>=0; j--){
		 if(buff[j] == '1'){
			left_count++;
		 } else {
			break;
		 }
	 }

	// similary we will find right count
	for(int j=last_index+2; j<len; j++){
		if(buff[j] == '1'){
		   right_count++;
		} else {
			break;
		}
	}

	if(left_count >= right_count){
	   printf("Flip the %d bit and longest is %d\n", start_index - 1, (last_index - start_index + 1 + left_count));
	} else {
	   printf("Flip the %d bit\n", last_index+1);
	}

	return result;

} 

int main(){

	struct node *result;
	long x = 1775;
	long k = decimalToBinary(x);
	printf("%ld\n", k);

	// Converting long to string	
	const int n = snprintf(NULL, 0, "%lu", k);
	assert(n > 0);
	char buf[n+1];
	int c = snprintf(buf, n+1, "%lu", k);
	assert(buf[n] == '\0');
	assert(c == n);

	// Now search for pattern for longest consecutive 1s"
	int len = strlen(buf);
    result = longest_sequence_1s(buf, len);	
//	printf("count:%d start_index:%d last_index:%d\n", result->count, result->start_index, result->last_index);

	return 1;

}
