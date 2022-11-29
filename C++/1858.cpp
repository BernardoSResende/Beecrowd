#include<stdio.h>
#include<math.h>

int main (){
int a,b,cont=0,num,menornum=1000,posmenornum;
scanf("%d",&num);
while(cont!=num){
	scanf("%d",&a);
	if(a<menornum){
		menornum=a;
		posmenornum=(cont+1);
	}
	cont++;
}
printf("%i\n",posmenornum);

return 0;
}