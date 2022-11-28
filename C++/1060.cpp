#include <stdio.h>
#include <math.h>
int main() {
 float	a,b,c,d,e,f;
 int cont;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	scanf("%f",&d);
	scanf("%f",&e);
	scanf("%f",&f);
	if (a>0) cont++;
	if (b>0) cont++;
	if (c>0) cont++;
	if (d>0) cont++;
	if (e>0) cont++;
	if (f>0) cont++;
	printf("%i valores positivos\n",cont);
	
	
	
	return 0;
}