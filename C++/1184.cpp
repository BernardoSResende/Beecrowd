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
  contlinha=1;
  contcoluna=0;
  contcolunaholder=1;
  	while(contcoluna!=11){
  		while(contlinha!=12){
  		soma=soma + m[contlinha][contcoluna];
  		contlinha++;	
  	  }
  	  contcoluna++;
  	  contcolunaholder++;
  	  contlinha=contcolunaholder;
	  }
	  if(letra=='S')printf("%.1f\n",soma);
	  if(letra=='M')printf("%.1f\n",soma/66.0);
	  

   
 return 0;
}