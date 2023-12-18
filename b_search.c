#include <stdio.h>
int main() {
   // printf() displays the string inside quotation
   
   
   int value_s;
   
   value_s = 56;
   
   int max;
   max = 100;
   int min;
   min = 0;
   
   int arr[max];
   
   for (int i=0; i < max; i++)
   {
   	arr[i] = i;
   }
   
   int j;
   j = (max-min)/2;
   
   int val;
   
   while (arr[j] != value_s) 
   {

	if (arr[j] < value_s) {
	
		
		min = j;
		j = j + (max-min)/2;
		
	}   
	else {
	
		max = j;
		j = (max-min)/2;
	
	}
	
   	val = arr[j];
   	// printf("Value is %d \n", val);
   		
   }
   
   printf("Value is %d \n", val);
   
   return 0;
}
