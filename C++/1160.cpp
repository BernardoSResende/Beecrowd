#include <stdio.h>
int main() {
 int numcasos,PA,PB,tempo;
 float G1,G2;
 scanf("%d",&numcasos);
 while(numcasos !=0){
 	  tempo=0;
 	  scanf("%d %d %f %f", &PA,&PB,&G1,&G2);
 	  while(PA<=PB){
 	  	PA=PA+(PA*G1/100);
 	  	PB=PB+(PB*G2/100);
 	  	tempo++;
 	  	if(tempo>100) break;
 	  	
	   }
	   if(tempo>100) printf("Mais de 1 seculo.\n");
	   else printf("%d anos.\n",tempo);
	  numcasos--;	
 }
 return 0;
}