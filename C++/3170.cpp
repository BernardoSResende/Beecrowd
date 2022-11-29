#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	int precisa, tem, falta;
	scanf(" %d %d",&tem,&precisa);
	precisa = int (floor((precisa+0.0)/2));
	if((tem - precisa) < 0) printf("Faltam %d bolinha(s)\n",precisa - tem);
	else printf("Amelia tem todas bolinhas!\n");
	
	return 0;
}