#include <stdio.h>
int main() {
 float n[100];
 int i;
 i=0;
 while(i!=100){
 	scanf("%f",&n[i]);
 	if(n[i]<=10)printf("A[%i] = %.1f\n",i,n[i]);
 	i++;
 	
 }
 
 return 0;
}