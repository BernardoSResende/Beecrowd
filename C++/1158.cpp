#include <stdio.h>
int main() {
 int contgeral,x,y,soma;
 scanf("%d",&contgeral);
 while(contgeral !=0){
 	  scanf("%d %d",&x,&y);
 	  if((x%2)!=0) x=x-2;
 	  else x--;
 	  soma=0;
 	while(y!=0){
 		x=x+2;
 		soma=soma +x;
 		
 		y--;
	 }
	 printf("%d\n",soma);
	 contgeral--;	
 }
 return 0;
}