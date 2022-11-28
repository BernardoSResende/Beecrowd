#include <stdio.h>
int main() {
 int numeroatual,maiornumero,posatual,posmaior;
 posmaior=0;
 posatual=0;
 numeroatual=0;
 maiornumero=0;
 while(posatual != 100){
 	posatual++;
 	scanf("%d",&numeroatual);
 	if(numeroatual>maiornumero){
 		maiornumero=numeroatual;
 		posmaior=posatual;
	 }
 	
 }
 printf("%i\n",maiornumero);
 printf("%i\n",posmaior);
 
 
 return 0;
}
