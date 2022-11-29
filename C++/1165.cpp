#include <stdio.h>
int main() {
 int n,numcasos,soma,cont;
 
 scanf("%d",&numcasos);
 while(numcasos !=0){
 	  scanf("%d",&n);
 	  soma=0;
 	  cont=2;
 	  while(cont!=n){
	   
 	  if((n%cont)==0) soma=soma+cont;
	   cont++;	
	   }
	   if(soma!=0) printf("%d nao eh primo\n",n);
	   else printf("%d eh primo\n",n);
	  numcasos--;	
 }
 return 0;
}