/* Question: Find the Number Occurring Odd Number of Times
Given an array of positive integers. All numbers occur even number of times except one number which occurs odd number of times. Find the number in O(n) time & constant space.

Example:
I/P = [1, 2, 3, 2, 3, 1, 3]
O/P = 3

Solution: x ^x = 0, if all numbers are occuring even times which will cancel out and will become 0 if we xor is
except that one which is occuring one time */

#include <stdio.h>
int getOddOccurrence(int ar[], int ar_size)
{
     int i;
     int res = 0; 
     for (i=0; i < ar_size; i++)     
        res = res ^ ar[i];
      
     return res;
}
 
/* Diver function to test above function */
int main()
{
     int ar[] = {2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2};
     int n = sizeof(ar)/sizeof(ar[0]);
     printf("%d\n", getOddOccurrence(ar, n));
     return 0;
}
