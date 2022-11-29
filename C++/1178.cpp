#include <stdio.h>
int main() {
 double n[100],num;
 int cont=0;
 scanf("%lf",&num);
 printf("N[0] = %.4lf\n",num);
 while(cont!=99){
 	n[cont+1]=num/2.000000000000000000000000000000000000000000;
 	printf("N[%i] = %.4lf\n" ,cont+1,n[cont+1]);
	num=num/2; 
 	cont++;

 }
 
 return 0;
}