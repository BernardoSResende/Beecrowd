#include <stdio.h>
int main() {
 int menornum,menornumimpresso,maiornum,cont,menornumoriginal,b,c;
 cont=0;
 scanf("%d %d",&menornum,&maiornum);
 if((menornum>1) && (menornum<20) && (maiornum>menornum) && (maiornum<100000)){
 menornumoriginal=menornum;
 menornum=0;
 menornumimpresso=0;
 
 
 while(cont!=maiornum){
 	if(menornum!=menornumoriginal){
 		if(menornum!=(menornumoriginal-1))printf("%i ",menornumimpresso+1);
 		else printf("%i",menornumimpresso+1);
 		menornumimpresso=menornumimpresso+1;
 		menornum=menornum+1;
 			cont=cont+1;
	 }
	else{
		printf("\n");
		menornum=0;
	}
	

 	
 }

 	printf("\n");
 }
 
 


 return 0;
}