#include <stdio.h>
 
int main() {
 float A;
 scanf("%f",&A);
 if (A>=0 && A<=100){
 	if (A<=25) printf("Intervalo [0,25]\n");
 	 else if (A<=50) printf("Intervalo (25,50]\n");
 	   else if (A<=75) printf("Intervalo (50,75]\n");
 	     else printf("Intervalo (75,100]\n");
 
 }
 else printf("Fora de intervalo\n");
 
 return 0;
 		
   
}