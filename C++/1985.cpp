#include<stdio.h>
#include<math.h>

int main (){
int idProd,cont=0,numcasos,qtd;
float precototal=0,precoProd;
 scanf("%d",&numcasos);
 while(cont!=numcasos){
 	scanf("%d %d",&idProd,&qtd);
 	if(idProd==1001) precoProd=1.5;
    else if(idProd==1002) precoProd=2.5;
    else if(idProd==1003) precoProd=3.5;
    else if(idProd==1004) precoProd=4.5;
    else if(idProd==1005) precoProd=5.5;
    precototal=precototal + (precoProd*qtd);
    cont++;
 }
 printf("%.2f\n",precototal);
 return 0;
}