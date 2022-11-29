#include<stdio.h>
#include<math.h>

int main (){
int numcasos,cont=0,numatual,cont2=0,cont3=0,cont4=0,cont5=0;
scanf("%d",&numcasos);
while(cont!=numcasos){
	scanf("%d",&numatual);
	if((numatual%2)==0) cont2++;
	if((numatual%3)==0) cont3++;
	if((numatual%4)==0) cont4++;
	if((numatual%5)==0) cont5++;
	cont++;
	
}
printf("%i Multiplo(s) de 2\n",cont2);
printf("%i Multiplo(s) de 3\n",cont3);
printf("%i Multiplo(s) de 4\n",cont4);
printf("%i Multiplo(s) de 5\n",cont5);
 return 0;
}