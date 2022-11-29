#include<stdio.h>
#include<math.h>

int main (){
float comida,dias=0,cont=0,numcasos;
scanf("%f",&numcasos);
while(cont!=numcasos){
	scanf("%f",&comida);
	 while(comida>1){
	 	dias++;
	 	comida=(comida+0.0)/2;
	 }
	 printf("%.0f dias\n",dias);
	 dias=0;
	 cont++;
}
return 0;
}