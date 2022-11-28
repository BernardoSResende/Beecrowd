#include <stdio.h>
int main() {
 int numerotestes,cont,numeroatual,numerocoelhos,numeroratos,numerosapos;
 char letra;
 numerotestes=0;
 cont=0;
 numeroatual=0;
 numerocoelhos=0;
 numeroratos=0;
 numerosapos=0;
 scanf("%d",&numerotestes);
 while(cont!=numerotestes){
 	cont++;
 	scanf("%d %c",&numeroatual,&letra);
 	if(letra== 'C') numerocoelhos= numerocoelhos+numeroatual;
 	if(letra=='R') numeroratos= numeroratos+numeroatual;
 	if(letra=='S') numerosapos= numerosapos+numeroatual;
 	
 }
 printf("Total: %i cobaias\n",(numerocoelhos+numerosapos+numeroratos));
 printf("Total de coelhos: %i\n",numerocoelhos);
 printf("Total de ratos: %i\n",numeroratos);
 printf("Total de sapos: %i\n",numerosapos);
 printf("Percentual de coelhos: %.2f %%\n",(100.00*numerocoelhos/(numerocoelhos+numerosapos+numeroratos)));
 printf("Percentual de ratos: %.2f %%\n",(100.00*numeroratos/(numerocoelhos+numerosapos+numeroratos)));
 printf("Percentual de sapos: %.2f %%\n",(100.00*numerosapos/(numerocoelhos+numerosapos+numeroratos)));
 
 
 return 0;
}