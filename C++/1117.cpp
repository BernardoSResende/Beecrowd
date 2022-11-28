#include <stdio.h>
int main() {
 int cont;
 float numatual,nota;
  cont=0;
  nota=0.0;
  while(cont != 2){
  	scanf("%f",&numatual);
  	if ((numatual>=0) && (numatual<=10)){
  		nota= nota+numatual;
  		cont=cont+1;
	  }
  	else printf("nota invalida\n");
  }
  printf("media = %.2f\n",(nota+0.0)/2);

 return 0;
}