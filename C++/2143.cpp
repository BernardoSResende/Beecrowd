#include<stdio.h>
#include<math.h>

int main (){
int t,num,cont=0;
scanf("%d",&t);
while(t!=0){
	while(cont!=t){
	scanf("%d",&num);
	if((num%2)==0) printf("%i\n",((num-2)*2)+2);
	else printf("%i\n",((num-1)*2)+1);
	cont++;
}
cont=0;
scanf("%d",&t);
}
return 0;
}