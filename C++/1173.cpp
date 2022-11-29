#include <stdio.h>
int main() {
 int n[10],cont,i;
 cont=0;
 i=1;
 scanf("%i",&n[0]);
  printf("N[0] = %i\n",n[0]);
   
 while(i!=10){
 	n[i]= n[i-1]*2;
 	printf("N[%i] = %i\n",i,n[i]);
 	i++;
 	
 }
 
 return 0;
}