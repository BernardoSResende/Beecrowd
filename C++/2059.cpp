#include<stdio.h>
#include<math.h>

int main (){
int par,j1,j2,roubo,contestacao;
scanf("%d %d %d %d %d",&par,&j1,&j2,&roubo,&contestacao);
if     (roubo==1 && contestacao==0) printf("Jogador 1 ganha!\n");
else if(roubo==1 && contestacao==1) printf("Jogador 2 ganha!\n");
else if(par==1){
	if(((j1+j2)%2)==0) printf("Jogador 1 ganha!\n");
	else printf("Jogador 2 ganha!\n");
}
else{
	if(((j1+j2)%2)==0) printf("Jogador 2 ganha!\n");
	else printf("Jogador 1 ganha!\n");
}
 return 0;
}