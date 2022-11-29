#include <stdio.h>
int main() {
 int num,cont,a,b,c;
 a=-3;b=-2;c=-1;cont=0;
 scanf("%d",&num);
 while(cont!=num){
 	printf("%i %i %i PUM\n",a+4,b+4,c+4);
 	cont=cont+1;
 	a=a+4;
 	b=b+4;
 	c=c+4;
 	
 }
 


 return 0;
}