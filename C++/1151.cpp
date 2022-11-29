#include <stdio.h>
int main() {
 int num1,num2,cont,numtotal,num1holder;
 scanf("%d",&numtotal);
 cont=0;
 num1=0;
 num2=1;
 if(numtotal==1) printf("0\n");
  else if (numtotal==2) printf("0 1\n");
 else{
 	printf("0 1 ");
 	cont=cont+2;
	 
 while(cont!=numtotal){
 	
	 if(cont==numtotal-1){
 		printf("%d\n",num1+num2);
 	num1holder=num1;
 	num1=num2;
 	num2=num1holder + num2;
 	cont++;
	 }
	 else{
 	printf("%d ",num1+num2);
 	num1holder=num1;
 	num1=num2;
 	num2=num1holder + num2;
 	cont++;
 }
 }
 }
 return 0;
}