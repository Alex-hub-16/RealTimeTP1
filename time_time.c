#include <stdio.h>
#include <time.h>

void print_time() {
	
	long clk_tck = CLOCKS_PER_SEC;
   	clock_t t1, t2;
   	
   	 /* Recuperation du temps initial en "clock ticks" */
   	t1 = clock();
   	
   	/* Recuperation du temps final en "clock ticks" */
   	t2 = clock();
   	
   	printf("Temps consomme (s) : %lf \n",
                (double)(t2-t1)/(double)clk_tck);
   	
}

int main() {
   // printf() displays the string inside quotation
   
   
   print_time();
   
   return 0;
}
