#include <stdio.h>
int main() {
 int cont,parametro;
 double numatual,nota;
  cont=0;
  nota=0.0;
  parametro=0;
  while(cont != 2){
  	parametro=0;
  	scanf("%lf",&numatual);
  	if ((numatual>=0) && (numatual<=10)){
  		nota= nota+numatual;
  		cont=cont+1;
	  }
  	else printf("nota invalida\n");
  	if(cont==2){
	   printf("media = %.2lf\n",(nota+0.0)/2);
	   while(parametro!=1 && parametro!=2){
	   	printf("novo calculo (1-sim 2-nao)\n");
	   	scanf("%d",&parametro);
	   	if(parametro==1){
	   		cont=0;
	   		nota=0;
		   }
	    } 
}
  }


 return 0;
}