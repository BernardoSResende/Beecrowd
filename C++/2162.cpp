#include<stdio.h>
#include<math.h>
#include<string.h>

int main (){
 int numcasos,cont=1,h,contVales=0,contPicos=0,contPlateau=0,controle=0;
 scanf("%d",&numcasos);
 int alturas[numcasos];
 scanf("%d",&alturas[0]);
  while(cont!=numcasos){
  	scanf("%d",&alturas[cont]);
  	if(alturas[cont]>alturas[cont-1]){
	  contPicos++;
	  if(contVales==1) contVales=0;
    }
  	if(alturas[cont]<alturas[cont-1]){
  		contVales++;
  		if(contPicos==1) contPicos=0;
  	}
  	if(alturas[cont]==alturas[cont-1])controle++;
  	if(contVales==2 || contPicos==2) controle++;
  	
  	cont++;
  	
  	
  }
  if(controle==0)printf("1\n");
  if(controle!=0) printf("0\n");
  
return 0;
}