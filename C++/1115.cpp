#include <stdio.h>
int main() {
 int num1,num2;
  scanf("%d %d",&num1,&num2);
  while((num1!=0) && (num2!=0)){
  	if ((num1>0) && (num2>0))printf("primeiro\n");
  	if ((num1<0) && (num2>0))printf("segundo\n");
  	if ((num1>0) && (num2<0))printf("quarto\n");
  	if ((num1<0) && (num2<0))printf("terceiro\n");
  	
  	scanf("%d %d",&num1,&num2);
  }

 return 0;
}