#include <stdio.h>
int main() {
 int contlinha=0,contcoluna=0,colunadesejada;
 char letra;
 float m[12][12],soma=0.0;
 scanf("%d",&colunadesejada);
 scanf(" %c",&letra);
  while(contlinha != 12){
  	while(contcoluna != 12){
  		scanf("%f",&m[contlinha][contcoluna]);
  		contcoluna++;
	  }
	contcoluna=0;
	contlinha++;
  }
  contlinha=0;
  	while(contlinha!=12){
  		soma=soma + m[contlinha][colunadesejada];
  		contlinha++;
	  }
	  if(letra=='S')printf("%.1f\n",soma);
	  if(letra=='M')printf("%.1f\n",soma/12.0);
	  

   
 return 0;
}