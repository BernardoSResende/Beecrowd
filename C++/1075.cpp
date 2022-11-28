#include <stdio.h>
int main() {
 int cont,numero;
 scanf("%d",&numero);
  cont=1;
  while(cont!=10000){
  	if((cont%numero)==2) printf("%i\n",cont);
  	cont= cont+1;
  }
 
 
 return 0;
}
