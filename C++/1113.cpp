#include <stdio.h>
int main() {
 int num1,num2;
  scanf("%d %d",&num1,&num2);
  while(num1!=num2){
  	if(num1>num2) printf("Decrescente\n");
  	else printf("Crescente\n");
  	
  	scanf("%d %d",&num1,&num2);
  }

 return 0;
}