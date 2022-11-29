#include<stdio.h>
#include<string.h>
//Bernardo Serravalle resende; Pedro Martins de Oliveira Menezes

int main(){
	double contJogadores=0,numJogadores,saquesJogador=0,defJogador=0,atkJogador=0,acertosSaqueJogador=0,acertosAtkJogador=0,acertosDefJogador=0;
	double saquesTotal=0,defTotal=0,atkTotal=0,acertosSaqueTotal=0,acertosDefTotal=0,acertosAtkTotal=0;
	char nome[40];
	scanf("%lf",&numJogadores);
	while(contJogadores!=numJogadores){
		scanf("%s",nome);
		scanf("%lf %lf %lf", &saquesJogador,&defJogador,&atkJogador);
		scanf("%lf %lf %lf",&acertosSaqueJogador,&acertosDefJogador,&acertosAtkJogador);
		saquesTotal=saquesTotal+saquesJogador;
		defTotal=defTotal+defJogador;
		atkTotal=atkTotal+atkJogador;
		acertosSaqueTotal=acertosSaqueTotal+acertosSaqueJogador;
		acertosDefTotal=acertosDefTotal+acertosDefJogador;
		acertosAtkTotal=acertosAtkTotal+acertosAtkJogador;
		contJogadores++;
	}
	printf("Pontos de Saque: %.2lf %%.\n",acertosSaqueTotal/saquesTotal*100.00);
	printf("Pontos de Bloqueio: %.2lf %%.\n",acertosDefTotal/defTotal*100.00);
	printf("Pontos de Ataque: %.2lf %%.\n",acertosAtkTotal/atkTotal*100.00);
	return 0;
}