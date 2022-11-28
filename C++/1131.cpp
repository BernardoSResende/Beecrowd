#include <stdio.h>
int main() {
 int parametro,golsinter,golsgremio,vitinter,vitgremio,empates,cont;
 parametro=0; golsinter=0; golsgremio=0; vitinter=0,vitgremio=0,empates=0,cont=0;
 while(parametro!=2){
 	scanf("%d %d",&golsinter,&golsgremio);
 	cont=cont+1;
 	if(golsinter>golsgremio) vitinter=vitinter+1;
 	 else if(golsinter<golsgremio) vitgremio=vitgremio+1;
 	  else empates=empates+1;
 	printf("Novo grenal (1-sim 2-nao)\n");
 	scanf("%d",&parametro);
 }
 printf("%i grenais\n", cont);
 printf("Inter:%i\n",vitinter);
 printf("Gremio:%i\n",vitgremio);
 printf("Empates:%i\n",empates);
 if(vitinter>vitgremio) printf("Inter venceu mais\n");
  else if(vitgremio>vitinter) printf("Gremio venceu mais\n");
   else printf("Não houve vencedor\n");
 


 return 0;
}