#include<stdio.h>
#include<math.h>

int main (){
int a,b,cont=0,num,menornum=1000,posmenornum;
scanf("%d",&num);
while(num!=cont){
	scanf("%d",&a);
	if((a%2)==0)printf("0\n");
	else printf("1\n");
	cont++;
}
return 0;
}