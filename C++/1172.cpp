#include <stdio.h>
int main() {
 int n[10],cont,i;
 cont=0;
 while(cont!=10){
 	scanf("%i",&n[cont]);
 	 if(n[cont]<=0) n[cont]=1;
 	printf("X[%i] = %i\n",cont,n[cont]);
 	cont++;
 	
 }
 
 return 0;
}