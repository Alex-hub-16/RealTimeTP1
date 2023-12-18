#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {
   // printf() displays the string inside quotation
   
   
   printf("First line \n");
   
   sleep(10); // sans le \n ne s'affiche pas puisque le code dispense une ligne entière.
   
   printf("Second line \n");
   
   return 0;
}
