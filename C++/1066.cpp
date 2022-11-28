#include <stdio.h>
int main() {
 int a,b,c,d,e,contpar,contimpar,contpos,contneg;
 scanf("%d",&a);
 scanf("%d",&b);
 scanf("%d",&c);
 scanf("%d",&d);
 scanf("%d",&e);
 contpar=0;
 contimpar=0;
 contpos=0;
 contneg=0;
 if(a>0) contpos++;
 if(b>0) contpos++;
 if(c>0) contpos++;
 if(d>0) contpos++;
 if(e>0) contpos++;
 if(a<0) contneg++;
 if(b<0) contneg++;
 if(c<0) contneg++;
 if(d<0) contneg++;
 if(e<0) contneg++;
 if((a%2)==0){
 	contpar++;
 }
 else contimpar++;
 
 if((b%2)==0){
 	contpar++;
 }
 else contimpar++;
 if((c%2)==0){
 	contpar++;
 }
 else contimpar++;
 if((d%2)==0){
 	contpar++;
 }
 else contimpar++;
 if((e%2)==0){
 	contpar++;
 }
 else contimpar++;
 printf("%i valor(es) par(es)\n",contpar);
 printf("%i valor(es) impar(es)\n",contimpar);
 printf("%i valor(es) positivo(s)\n",contpos);
 printf("%i valor(es) negativo(s)\n",contneg);
 
 return 0;
}
