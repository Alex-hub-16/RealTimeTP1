#include <stdio.h>

int sum(int a, int b) {
	return a+b;
}

int main() {
   // printf() displays the string inside quotation
   
   int a;
   int b;
   int somme;	
   
   a = 2;
   b = 3;
  	
   somme = sum(a,b);
   
   printf("%d ", a);
   printf("%d ", b);
   printf("%d ", somme);
   
   return 0;
}
