#include<stdio.h>
#include<math.h>

int main (){
int numcasos,cont=0,H,M,O;
scanf("%d",&numcasos);
while(cont!=numcasos){
	scanf("%d %d %d",&H,&M,&O);
	if(O==0 && H>9 && M>9) printf("%i:%i - A porta fechou!\n",H,M);
	if(O==1 && H>9 && M>9) printf("%i:%i - A porta abriu!\n",H,M);
	if(O==0 && H<=9 && M>9) printf("0%i:%i - A porta fechou!\n",H,M);
	if(O==1 && H<=9 && M>9) printf("0%i:%i - A porta abriu!\n",H,M);
	if(O==0 && H<=9 && M<=9) printf("0%i:0%i - A porta fechou!\n",H,M);
	if(O==1 && H<=9 && M<=9) printf("0%i:0%i - A porta abriu!\n",H,M);
	if(O==0 && H>9 && M<=9) printf("%i:0%i - A porta fechou!\n",H,M);
	if(O==1 && H>9 && M<=9) printf("%i:0%i - A porta abriu!\n",H,M);
	cont++;
}

return 0;
}