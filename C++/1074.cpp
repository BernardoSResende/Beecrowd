#include <stdio.h>
int main() {
 int qtd,contgeral,numero;
 contgeral=0;
 qtd=0;
 scanf("%i",&qtd);
 while(contgeral != qtd){
 	contgeral++;
 	scanf("%i",&numero);
 	 if(numero==0) printf("NULL\n");
 	  else{
 	  	if((numero>0) && ((numero%2)==0)) printf("EVEN POSITIVE\n");
 	  	if((numero<0) && ((numero%2)==0)) printf("EVEN NEGATIVE\n");
 	  	if((numero<0) && ((numero%2)!=0)) printf("ODD NEGATIVE\n");
 	  	if((numero>0) && ((numero%2)!=0)) printf("ODD POSITIVE\n");
	   }
 	
 }
 
 
 return 0;
}