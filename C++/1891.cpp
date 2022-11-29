#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	int retirada,dourada;
}moeda;

int moedasRetiradas = 0;
int contPos = 0;
void removeMoedas(moeda a[], int tam,int pos[],int startPoint){
	for(int j = startPoint;j<tam;j++){
			if(a[j].retirada == 0){
				if(a[j].dourada==1){
					a[j].retirada = 1;
					moedasRetiradas++;
					pos[contPos] = (j+1);
					contPos++;
					if(a[j-1].dourada) a[j-1].dourada = 0;
					else a[j-1].dourada = 1;
					if(a[j+1].dourada) a[j+1].dourada = 0;
					else a[j+1].dourada = 1;
					if(j==0) removeMoedas(a,tam,pos,0);
					else removeMoedas(a,tam,pos,j-1);
					break;
			 }
			}
	}
}

int main(){
	int numCasos,tamVet;

	scanf(" %d",&numCasos);
	for(int i =0;i<numCasos;i++){
		
		scanf(" %d",&tamVet);
		moeda moedas[tamVet];
		int posicoes[tamVet];
		char coiso[tamVet];
		scanf(" %s",coiso);
		for(int f = 0;f<tamVet;f++){
			if(coiso[f] == 'B') moedas[f].dourada = 0;
			else moedas[f].dourada = 1;
			moedas[f].retirada = 0;
		}
		removeMoedas(moedas,tamVet,posicoes,0);
		if(moedasRetiradas == tamVet){
			printf("Y\n");
			for(int h = 0;h<(tamVet-1);h++){
				printf("%i ",posicoes[h]);
			}
			printf("%d\n",posicoes[tamVet-1]);
		}
		else printf("N\n");
		moedasRetiradas = 0;
		contPos=0;
		
	}
	return 0;
}