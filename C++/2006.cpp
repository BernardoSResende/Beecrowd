#include<stdio.h>
#include<math.h>

int main (){
int referencia,a,b,c,d,e,cont=0;
	scanf("%d",&referencia);
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	if(a==referencia) cont++;
	if(b==referencia) cont++;
	if(c==referencia) cont++;
	if(d==referencia) cont++;
	if(e==referencia) cont++;
	printf("%i\n",cont);
 return 0;
}