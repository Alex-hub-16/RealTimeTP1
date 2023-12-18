#include <stdio.h>
int main() {
   // printf() displays the string inside quotation
   
   int number;

   printf("Enter an integer: ");
   scanf("%d", &number);
  
   printf("%p", &number);
   
   
   return 0;
}
