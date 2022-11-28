#include <stdio.h>
int main() {
 int numero,cont;
 scanf("%d",&numero);
 cont=0;
 if((numero%2)!=0) numero=numero-1;
 while((cont)!=(numero)) {
 printf("%i^2 = %i\n",cont+2,(cont + 2)*(cont+ 2));
 cont= cont +2;
}
 
 return 0;
}