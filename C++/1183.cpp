#include <stdio.h>
int main() {
 int contlinha=0,contcoluna=0,colunadesejada,contcolunaholder;
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
  contlinha=0;
  contcoluna=1;
  contcolunaholder=1;
  	while(contlinha!=11){
  		while(contcoluna!=12){
  		soma=soma + m[contlinha][contcoluna];
  		contcoluna++;	
  	  }
  	  contlinha++;
  	  contcolunaholder++;
  	  contcoluna=contcolunaholder;
	  }
	  if(letra=='S')printf("%.1f\n",soma);
	  if(letra=='M')printf("%.1f\n",soma/66.0);
	  

   
 return 0;
}