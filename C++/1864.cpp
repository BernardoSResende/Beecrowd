#include<stdio.h>
#include<math.h>

int main (){
int a,b,cont=0,num,menornum=1000,posmenornum;
char frase[34];
frase[0]='L';frase[1]='I';frase[2]='F';frase[3]='E';frase[4]=' ';frase[5]='I';frase[6]='S';frase[7]=' ';frase[8]='N';frase[9]='O';frase[10]='T';frase[11]=' ';frase[12]='A';frase[13]=' ';frase[14]='P';frase[15]='R';frase[16]='O';frase[17]='B';frase[18]='L';frase[19]='E';frase[20]='M';frase[21]=' ';frase[22]='T';frase[23]='O';frase[24]=' ';frase[25]='B';frase[26]='E';frase[27]=' ';frase[28]='S';frase[29]='O';frase[30]='L';frase[31]='V';frase[32]='E';frase[33]='D';

scanf("%d",&num);
while(cont!=num){
	if(cont==num-1) printf("%c\n",frase[cont]);
	else printf("%c",frase[cont]);
	cont++;
}

return 0;
}