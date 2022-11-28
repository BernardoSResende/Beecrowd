#include <stdio.h>
int main() {
 int qtd,contgeral;
 float numero1,numero2,numero3;
 contgeral=0;
 qtd=0;
 scanf("%d",&qtd);
 while(contgeral != qtd){
 	contgeral++;
 	scanf("%f %f %f",&numero1,&numero2,&numero3);
 	printf("%.1f\n",((numero1*2)+(numero2*3)+(numero3*5))/10);
 	
 }
 
 
 return 0;
}