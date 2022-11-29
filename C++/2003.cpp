#include<stdio.h>
#include<math.h>

int main (){
int hora,minuto;
while((scanf("%d:%d",&hora,&minuto))!=EOF){
	if(hora<7) printf("Atraso maximo: 0\n");
	else if(hora<8) printf("Atraso maximo: %i\n",minuto);
	else if(hora<9) printf("Atraso maximo: %i\n",minuto+60);
	else printf("Atraso maximo: 120\n");
}
 return 0;
}
