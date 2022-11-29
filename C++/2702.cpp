#include<stdio.h>
#include<math.h>
#include<string.h>

int main (){
 int qtdA,qtdB,qtdC,pedidosA,pedidosB,pedidosC,x=0;
 scanf("%d %d %d",&qtdA,&qtdB,&qtdC);
 scanf("%d %d %d",&pedidosA,&pedidosB,&pedidosC);
 if(pedidosA>qtdA) x= x +pedidosA-qtdA;
if(pedidosB>qtdB) x= x +pedidosB-qtdB;
if(pedidosC>qtdC) x= x +pedidosC-qtdC;
printf("%i\n",x);
return 0;
}