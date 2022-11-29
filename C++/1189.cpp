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
  contcoluna=0;
  contlinha=1;
  contholder=11;
  contholder2=1;
  	while(contcoluna!=5){
  		while(contlinha!=contholder){
  		soma=soma + m[contlinha][contcoluna];
  		contlinha++;	
  	  }
  	  contholder--;
  	  contholder2++;
	  contlinha=contholder2;
  	  
  	  contcoluna++;
	  }
	  if(letra=='S')printf("%.1f\n",soma);
	  if(letra=='M')printf("%.1f\n",soma/30.0);
	  

   
 return 0;
}