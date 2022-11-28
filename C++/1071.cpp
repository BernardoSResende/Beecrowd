#include <stdio.h>
int main() {
 int num1,num2,maiornum,menornum,soma,numatual;
 scanf("%d",&num1);
 scanf("%d",&num2);
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
	if (num1==num2) printf("0");
	
	else printf("%i\n",soma);	

 return 0;
}