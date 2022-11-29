#include <stdio.h>
int main() {
 int x,y,maiornum,menornum;
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
  while(menornum<maiornum-1){
  	menornum=menornum+1;
  	if(((menornum%5)==2) || (menornum%5==3)){
  		printf("%i\n",menornum);
	  }
	  
  }
  


 return 0;
}