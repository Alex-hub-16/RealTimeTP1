#include <stdio.h>
#include <time.h>



void f1() {

   	printf("task1\n");
   	
}

void f2() {

   	printf("task2\n");
   	
}

void f3() {

   	printf("task3\n");
   	
}

int main() {
   // printf() displays the string inside quotation
   
   
   clock_t time_t = clock();
   
   clock_t timeu;
   
   timeu = clock()-time_t;
   
   while (timeu < 5000) {
   
   	timeu = clock()-time_t;
   
   	if (timeu%2 == 0) {
   	
   		f1();	
   		
   	}
   	if (timeu%3 == 0) {
   	
   		f2();	
   		
   	}
   	if (timeu%7 == 0) {
   	
   		f3();	
   		
   	}
   
   } 
   
   
   return 0;
}
