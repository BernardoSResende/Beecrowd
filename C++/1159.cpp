#include <stdio.h>
int main() {
 int num;
 scanf("%d",&num);
 while(num !=0){
 	  if((num%2)!=0) num=num+1;
 	  printf("%d\n",(5*num)+20);
	  scanf("%d",&num);	
 }
 return 0;
}
