#include <stdio.h>

 
int main() {
 int dias, contA, contM;
 contA=0;
 contM=0;
 scanf("%d",&dias);
 
 while(dias>=365){
 	contA=contA+1;
 	dias=dias-365;
 }
 while(dias>=30){
 	contM=contM+1;
 	dias=dias-30;
 }
 printf("%i ano(s)\n",contA);
 printf("%i mes(es)\n",contM);
 printf("%i dia(s)\n",dias);
 return 0;
}