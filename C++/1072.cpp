#include <stdio.h>
int main() {
 int qtd,contgeral,contin,contout,numero;
 contgeral=0;
 contin=0;
 contout=0;
 qtd=0;
 scanf("%i",&qtd);
 while(contgeral != qtd){
 	contgeral++;
 	scanf("%i",&numero);
 	 if((numero>=10) && (numero<=20)) contin++;
 	 else contout++;
 	
 }
 printf("%i in\n",contin);
 printf("%i out\n",contout);
 
 return 0;
}