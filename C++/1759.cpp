#include<stdio.h>

int main (){
int num,cont=0;
double r1,r2;
scanf("%i",&num);
while(cont!=num){
	if(cont==num-1)printf("Ho!\n");
	else printf("Ho ");
	cont++;
}
return 0;
}