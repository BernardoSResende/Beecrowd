#include <stdio.h>
int main() {
 int cont,num;
 scanf("%d",&num);
 cont=1;
 while(cont!= num+1){
 	if((num%cont)==0) printf("%d\n",cont);
 	cont++;
 }


 return 0;
}