#include <stdio.h>
int main() {
 int tam, cont=0,menorvalor=1000,posmenorvalor,pos,valor;
 scanf("%d",&tam);
 int v[tam];
 
 	
 	while(cont!= tam){
      scanf("%d",&v[cont]);
 	 if(v[cont]<menorvalor){
 	 	menorvalor=v[cont];
 	 	posmenorvalor=cont;
	  
	  }
	  cont++;
 }
 
 printf("Menor valor: %i\n",menorvalor);
 printf("Posicao: %i\n",posmenorvalor);
 
 return 0;
}