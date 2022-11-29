#include <stdio.h>
int main() {
 int cont=0;
 float num=1,den=1,soma=0;
 while(num!=39){
 	soma=soma+(num/den);
 	num=num+2;
 	den=den*2;
 }
 printf("%.2f\n",soma);


 return 0;
}