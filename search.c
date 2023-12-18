#include <stdio.h>
int main() {
   // printf() displays the string inside quotation
   
   
   int value_s;
   
   value_s = 56;
   
   int max;
   max = 100;
   
   int arr[max];
   
   for (int i=0; i < max; i++)
   {
   	arr[i] = i;
   }
   
   int j;
   j = 0;
   
   int val;
   
   while (arr[j] != value_s) 
   {
   
   	j++;
   	val = arr[j];
   	
   	
   }
   
   printf("Value is %d", val);
   
   return 0;
}
