#include <stdio.h>
int main() {
 int i,comp,n[20];
 i=0;
 while(i!=20){
 	scanf("%d",&n[i]);
 	i++;	
 }
 comp=0;
 i=19;
 while(comp!=20){
 	printf("N[%i] = %i\n",comp,n[i]);
 	i--;
 	comp++;
 }
 
 
 return 0;
}