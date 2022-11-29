#include<stdio.h>
#include<math.h>
#include<string.h>

int main (){
  int numcasos,cont=0,atkD,defD,lvlD,atkG,defG,lvlG,bonus,golpeD,golpeG;
  scanf("%d",&numcasos);
  while(cont!=numcasos){
  	scanf("%d",&bonus);
  	scanf("%d %d %d",&atkD,&defD,&lvlD);
  	scanf("%d %d %d",&atkG,&defG,&lvlG);
  	golpeD=(atkD+defD)/2;
  	if((lvlD%2)==0) golpeD=golpeD+bonus;
  	golpeG=(atkG+defG)/2;
  	if((lvlG%2)==0) golpeG=golpeG+bonus;
  	if(golpeG>golpeD) printf("Guarte\n");
  	else if(golpeG==golpeD) printf("Empate\n");
  	else printf("Dabriel\n");
  	
  	cont++;
	  
    }
 return 0;
}