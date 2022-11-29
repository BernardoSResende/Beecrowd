#include <stdio.h>
int main() {
 int contlinha=0,contcoluna=0,colunadesejada,contholder,contholder2;
 char letra;
 double m[12][12],soma=0.0;
 scanf(" %c",&letra);
  while(contlinha != 12){
  	while(contcoluna != 12){
  		scanf("%lf",&m[contlinha][contcoluna]);
  		contcoluna++;
	  }
	contcoluna=0;
	contlinha++;
  }
  contlinha=0;
  contcoluna=1;
  contholder=11;
  contholder2=1;
  	while(contlinha!=5){
  		while(contcoluna!=contholder){
  		soma=soma + m[contlinha][contcoluna];
  		contcoluna++;	
  	  }
  	  contholder--;
  	  contholder2++;
	  contcoluna=contholder2;
  	  
  	  contlinha++;
	  }
	  if(letra=='S')printf("%.1lf\n",soma);
	  if(letra=='M')printf("%.1lf\n",soma/30.0);
	  

   
 return 0;
}