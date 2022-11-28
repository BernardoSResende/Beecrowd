#include <stdio.h>

int main() {
 int cod,qtd;
 
 scanf("%d %d",&cod,&qtd);
 if (cod==1) printf("Total: R$ %.2f\n", qtd*4.0);

 if (cod==2) printf("Total: R$ %.2f\n", qtd*4.5);
 
 if (cod==3) printf("Total: R$ %.2f\n", qtd*5.0);
 
 if (cod==4) printf("Total: R$ %.2f\n", qtd*2.0);
 
 if (cod==5) printf("Total: R$ %.2f\n", qtd*1.5);
 
 
 return 0;
 		
   
}