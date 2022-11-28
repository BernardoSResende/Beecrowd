#include <stdio.h>
#include <math.h>
int main() {
    int hc,hf;
    scanf("%d %d",&hc,&hf);
    if((hc==0) && (hf!=0)) printf("O JOGO DUROU %i HORA(S)\n",hf);
    else {
    if(hc==hf) printf("O JOGO DUROU 24 HORA(S)\n");
    else {
    if(hf<12) hf=hf+24;
    printf("O JOGO DUROU %i HORA(S)\n",(hf-hc));
    
	}
}
	return 0;
    
    
    
   	
   }