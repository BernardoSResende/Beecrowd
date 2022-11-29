#include<stdio.h>
#include<math.h>
#include<string.h>

int main (){
 int n,linhasT,colunasT,contlinhas=0,contcolunas=0;
 scanf("%d",&n);
 linhasT=n+1;
 colunasT=n+1;
 int matriz[linhasT][colunasT];
 char matrizsaida[n][n];
 while(contlinhas!=linhasT){
 	while(contcolunas!=colunasT){
 		scanf("%d",&matriz[contlinhas][contcolunas]);
 		contcolunas++;
	 }
	 contcolunas=0;
	 contlinhas++;
 }
 contlinhas=0;
 contcolunas=0;
 while(contlinhas!=linhasT-1){
 	while(contcolunas!=colunasT-1){
 		if((matriz[contlinhas][contcolunas]+matriz[contlinhas][contcolunas+1]+matriz[contlinhas+1][contcolunas]+matriz[contlinhas+1][contcolunas+1])>=2){
 			matrizsaida[contlinhas][contcolunas]='S';
		 }
		else matrizsaida[contlinhas][contcolunas]='U';
		contcolunas++;
	 }
	 contcolunas=0;
	 contlinhas++;
 }
 contlinhas=0;
 contcolunas=0;
 while(contlinhas!=n){
 	while(contcolunas!=n){
 		if(contcolunas== n-1) printf("%c\n",matrizsaida[contlinhas][contcolunas]);
 		else printf("%c",matrizsaida[contlinhas][contcolunas]);
 		contcolunas++;
	 }
	contcolunas=0;
	contlinhas++;
 }
 
 
 return 0;
}