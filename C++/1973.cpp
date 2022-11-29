#include<stdio.h>
#include<math.h>

int main (){
unsigned long long int numfazendas,cont=0,fazendasvisitadas=0,ovelhasrestantes=0;
scanf("%llu",&numfazendas);
int ovelhasnafazenda[numfazendas];
int marcadorpassagem[numfazendas];
while(cont!=numfazendas){
	scanf("%llu",&ovelhasnafazenda[cont]);
	marcadorpassagem[cont]=0;
	cont++;
}
cont=0;
while(cont!=-1 && cont!=numfazendas){
	if((ovelhasnafazenda[cont]%2)==0){
		if(ovelhasnafazenda[cont]!=0) {
		ovelhasnafazenda[cont]--;
		marcadorpassagem[cont]++;
	}
		cont--;

	}
	else{
		if(ovelhasnafazenda[cont]!=0) {
         ovelhasnafazenda[cont]--;
         marcadorpassagem[cont]++;
     }
		cont++;
	}
	
}
cont=0;
while(cont!=numfazendas){
	if(marcadorpassagem[cont]>0) fazendasvisitadas++;
	ovelhasrestantes=ovelhasrestantes + ovelhasnafazenda[cont];
	cont++;
}
printf("%llu %llu\n",fazendasvisitadas,ovelhasrestantes);

return 0;
}
