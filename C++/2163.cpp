#include<stdio.h>
#include<math.h>
#include<string.h>

int main (){
 int linhas,colunas,contlinhas=0,contcolunas=0,x=0,y=0;
  scanf("%d %d",&linhas,&colunas);
 int m[linhas][colunas];
 while(contlinhas!=linhas){
 	while(contcolunas!=colunas){
 		scanf("%d",&m[contlinhas][contcolunas]);
 		contcolunas++;
	 }
	 contcolunas=0;
	 contlinhas++;
 }
 contlinhas=1;
 contcolunas=1;
 while(contlinhas!=linhas-1){
 	while(contcolunas!=colunas-1){
 		if(m[contlinhas][contcolunas]==42){
 			if( m[contlinhas-1][contcolunas-1]==7 && m[contlinhas-1][contcolunas]==7 && m[contlinhas-1][contcolunas+1]==7 && m[contlinhas][contcolunas-1]==7 && m[contlinhas][contcolunas+1]==7 && m[contlinhas+1][contcolunas-1]==7 && m[contlinhas+1][contcolunas]==7 && m[contlinhas+1][contcolunas+1]==7){
 			 x=contlinhas+1;
			 y=contcolunas+1;	
			 }
		 }
		 contcolunas++;
	 }
	 contcolunas=0;
	 contlinhas++;
 }
printf("%i %i\n",x,y);   
return 0;
}