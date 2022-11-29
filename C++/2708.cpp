#include<stdio.h>
#include<math.h>
#include<string.h>

int main (){
 int contSaida,contVolta,numpassageiros,totalnoparque=0,jeepsnoparque=0;
 char str[7],salida[7]="SALIDA",vuelta[7]="VUELTA",abend[7]="ABEND";
 scanf("%s",&str);
 while(strcmp(str,abend)!=0){
 	scanf("%d",&numpassageiros);
 	if(strcmp(str,salida)==0){
 		totalnoparque=totalnoparque + numpassageiros;
 		jeepsnoparque++;
	 }
	if(strcmp(str,vuelta)==0){
		totalnoparque=totalnoparque-numpassageiros;
		jeepsnoparque--;
	}
	scanf("%s",&str);
 }
 printf("%i\n",totalnoparque);
 printf("%i\n",jeepsnoparque);
return 0;
}