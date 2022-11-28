#include <stdio.h>
int main() {
 int a,b,c,d,e,cont;
 scanf("%d",&a);
 scanf("%d",&b);
 scanf("%d",&c);
 scanf("%d",&d);
 scanf("%d",&e);
 cont=0;
 if((a%2)==0){
 	cont++;
 }
 if((b%2)==0){
 	cont++;
 }
 if((c%2)==0){
 	cont++;
 }
 if((d%2)==0){
 	cont++;
 }
 if((e%2)==0){
 	cont++;
 }
 printf("%i valores pares\n",cont);
 
 return 0;
}