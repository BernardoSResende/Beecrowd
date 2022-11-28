#include <stdio.h>
int main() {
 int num1,num2,maiornum,menornum,soma,numatual,cont,numpares;
 scanf("%d",&numpares);
 cont=0;
 while(cont < numpares){

 scanf("%d %d",&num1,&num2);
 soma=0;
 	  if(num1>num2){
 	  	maiornum=num1;
 	  	menornum=num2;
	   }
	   else{
	   	maiornum=num2;
	   	menornum=num1;
	   }
	if((menornum%2)==0) menornum=menornum+1;
	else menornum=menornum+2;
	numatual=menornum;
	while(numatual < maiornum){
	   soma=soma +numatual;
	   numatual=numatual+2;
	}
	if (num1==num2) printf("0\n");
	
	else printf("%i\n",soma);
	cont= cont+1;
}

 return 0;
}