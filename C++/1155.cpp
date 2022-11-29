#include <stdio.h>
int main() {
 int cont=0;
 float num=0,soma=0;
 while(num!=100){
 	num++;
 	soma=soma+(1/num);
 }
 printf("%.2f\n",soma);


 return 0;
}