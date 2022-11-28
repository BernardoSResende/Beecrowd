#include <stdio.h>
int main() {
 int num1,num2,maiornum,menornum,soma,numatual;
 scanf("%d %d",&num1,&num2);
 
 while(num1>0 && num2>0){
 	   soma=0;
 	  if(num1>=num2){
 	  	maiornum=num1;
 	  	menornum=num2;
	   }
	   else{
	   	maiornum=num2;
	   	menornum=num1;
	   }
	numatual=menornum;
	while(numatual != (maiornum+1)){
	   printf("%i ",numatual);
	   soma= soma + numatual;
	   numatual= numatual + 1;
	}
	printf("Sum=%i\n",soma);
	
	scanf("%d %d",&num1,&num2);
	
	
	   
	
 }
 return 0;
}