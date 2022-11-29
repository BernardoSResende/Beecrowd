#include <stdio.h>
int main() {
 int x,y,maiornum,menornum,soma;
 soma=0;
 scanf("%d",&x);
 scanf("%d",&y);
  if(x>y){
  	maiornum=x;
  	menornum=y;
  }
  else{
  	maiornum=y;
  	menornum=x;
  }
  while(menornum<=maiornum){
  	if((menornum%13)!=0){
  		soma=soma + menornum;
	  }
	  menornum=menornum+1;
  }
  printf("%i\n",soma);
  


 return 0;
}