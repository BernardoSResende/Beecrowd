#include <stdio.h>
int main() {
 int contlinha=0,contcoluna=0,linhadesejada;
 char letra;
 float m[12][12],soma=0.0;
 scanf("%d",&linhadesejada);
 scanf(" %c",&letra);
  while(contlinha != 12){
  	while(contcoluna != 12){
  		scanf("%f",&m[contlinha][contcoluna]);
  		contcoluna++;
	  }
	contcoluna=0;
	contlinha++;
  }
  
  	while(contcoluna!=12){
  		soma=soma + m[linhadesejada][contcoluna];
  		contcoluna++;
	  }
	  if(letra=='S')printf("%.1f\n",soma);
	  if(letra=='M')printf("%.1f\n",soma/12.0);
	  

   
 return 0;
}