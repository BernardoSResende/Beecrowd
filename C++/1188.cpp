#include <stdio.h>
int main() {
 int contlinha=0,contcoluna=0,colunadesejada,contholder,contholder2;
 char letra;
 float m[12][12],soma=0.0;
 scanf(" %c",&letra);
  while(contlinha != 12){
  	while(contcoluna != 12){
  		scanf("%f",&m[contlinha][contcoluna]);
  		contcoluna++;
	  }
	contcoluna=0;
	contlinha++;
  }
  contlinha=7;
  contcoluna=5;
  contholder=7;
  contholder2=5;
  	while(contlinha!=12){
  		while(contcoluna!=contholder){
  		soma=soma + m[contlinha][contcoluna];
  		contcoluna++;	
  	  }
  	  contholder++;
  	  contholder2--;
	  contcoluna=contholder2;
  	  
  	  contlinha++;
	  }
	  if(letra=='S')printf("%.1f\n",soma);
	  if(letra=='M')printf("%.1f\n",soma/30.0);
	  

   
 return 0;
}