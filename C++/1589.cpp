#include<stdio.h>

int main (){
int num,cont=0;
double r1,r2;
scanf("%i",&num);
while(cont!=num){
	scanf("%lf %lf",&r1,&r2);
	printf("%.0lf\n",r1+r2);
	cont++;
}
return 0;
}