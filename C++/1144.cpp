#include <stdio.h>
int main() {
 int num,cont,a,b,c;
 a=1;cont=0;
 scanf("%d",&num);
 while(cont!=num){
 	printf("%i %i %i\n",a,a*a,a*a*a);
 	printf("%i %i %i\n",a,(a*a)+1,(a*a*a)+1);
 	cont=cont+1;
 	a=a+1;

 	
 }
 


 return 0;
}