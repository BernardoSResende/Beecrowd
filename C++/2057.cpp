#include<stdio.h>
#include<math.h>

int main (){
int horasaida,horachegada,fuso,duracaovoo;
scanf("%d %d %d",&horasaida,&duracaovoo,&fuso);
if((horasaida+duracaovoo+fuso)>24) horachegada=horasaida+duracaovoo+fuso-24;
else if((horasaida+duracaovoo+fuso)<0) horachegada=horasaida+duracaovoo+fuso+24;
else if((horasaida+duracaovoo+fuso==0)) horachegada=0;
else horachegada=horasaida+duracaovoo+fuso;
printf("%i\n",horachegada);

 return 0;
}