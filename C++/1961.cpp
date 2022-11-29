#include<stdio.h>
#include<math.h>

int main (){
int pulo,numcanos,cont=0,pulosbemsucedidos=0;
scanf("%d %d",&pulo,&numcanos);
int alturacano[numcanos];
while(cont!=numcanos){
	scanf("%d",&alturacano[cont]);
	cont++;
}
cont=0;
while(cont!=numcanos-1){
	if(abs(alturacano[cont]-alturacano[cont+1])>pulo){
		printf("GAME OVER\n");
		break;
	}
	else pulosbemsucedidos++;
	cont++;
}
if(pulosbemsucedidos==numcanos-1) printf("YOU WIN\n");

return 0;
}