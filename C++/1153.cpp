#include <stdio.h>
int main() {
 int num1,resultado;
 resultado=1;
 scanf("%d",&num1);
 while(num1!=0){
 	resultado=resultado*num1;
 	num1--;
 	
 }
 printf("%d\n",resultado);


 return 0;
}