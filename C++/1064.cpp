#include <stdio.h>
int main() {
 float a,b,c,d,e,f,cont,conta,contb,contc,contd,conte,contf;
 scanf("%f",&a);
 scanf("%f",&b);
 scanf("%f",&c);
 scanf("%f",&d);
 scanf("%f",&e);
 scanf("%f",&f);
 cont=0;
 if(a>0){
 	cont++;
 	conta = a;
 }
 else conta=0;
 if(b>0){
 	cont++;
 	contb = b;
 }
 else contb=0;
 if(c>0){
 	cont++;
 	contc = c;
 }
 else contc=0;
 if(d>0){
 	cont++;
 	contd = d;
 }
 else contd=0;
 if(e>0){
 	cont++;
 	conte =e ;
 }
 else conte=0;
 if(f>0){
 	cont++;
 	contf =f ;
 }
 else contf=0;
 printf("%.0f valores positivos\n",cont);
 printf("%.1f\n",(conta+contb+contc+contd+conte+contf)/(cont));
 
 return 0;
}