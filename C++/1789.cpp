#include<stdio.h>

int main (){
int num,cont=0,vel,maiorvel;
while(scanf("%d",&num) != EOF){
   while(cont!=num){
   	scanf("%d",&vel);
   	if(vel>maiorvel){
   		maiorvel=vel;
	   }
	   cont++;
   }
   if(maiorvel<10)printf("1\n");
   else if(maiorvel<20) printf("2\n");
   else printf("3\n");	
   cont=0;
   maiorvel=0;
	
}
return 0;
}