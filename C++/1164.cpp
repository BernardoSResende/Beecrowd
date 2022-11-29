#include <stdio.h>
int main() {
 int n,numcasos,soma,cont;
 
 scanf("%d",&numcasos);
 while(numcasos !=0){
 	  scanf("%d",&n);
 	  soma=0;
 	  cont=1;
 	  while(cont!=n){
	   
 	  if((n%cont)==0) soma=soma+cont;
	   cont++;	
	   }
	   if(soma==n) printf("%d eh perfeito\n",soma);
	   else printf("%d nao eh perfeito\n",n);
	  numcasos--;	
 }
 return 0;
}