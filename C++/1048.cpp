#include <stdio.h>
#include <math.h>
int main() {
	float sal;
	int reajuste;
	scanf("%f",&sal);
	if (sal<=400) reajuste=15;
	else if (sal<=800) reajuste=12;
	else if (sal<=1200) reajuste=10;
	else if (sal<=2000) reajuste=7;
	else reajuste=4;
	
	printf("Novo salario: %.2f\n",(sal*reajuste/100.0)+sal);
	printf("Reajuste ganho: %.2f\n",sal*reajuste/100.0);
	printf("Em percentual: %i %%\n",reajuste);
	
	
 
	return 0;
   }