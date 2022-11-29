#include <stdio.h>
int main() {
 int numprincipal,cont;
  scanf("%d",&numprincipal);
  cont=0;
   while(numprincipal!=0){
   	 while(cont!=numprincipal){
   	 	if(cont!=numprincipal-1 )printf("%i ",cont+1);
   	 	else printf("%i",cont+1);
   	 	cont=cont+1;
		}
		printf("\n");
		cont=0;
		scanf("%d",&numprincipal);
   }
 return 0;
}