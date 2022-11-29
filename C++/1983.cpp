#include<stdio.h>
#include<math.h>

int main (){
int numalunos,cont=0,idmaiornota,idatual;
float nota,maiornota=0;
scanf("%d",&numalunos);
while(cont!=numalunos){
	scanf("%d %f",&idatual,&nota);
	if(nota>maiornota){
		maiornota=nota;
		idmaiornota=idatual;
	}
	cont++;
	
}
if(maiornota<8) printf("Minimum note not reached\n");
else printf("%i\n",idmaiornota);
return 0;
}
