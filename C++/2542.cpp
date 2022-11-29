#include <string.h>
#include <stdio.h>

int main(){
	long int NumAtr, AtrSorteado, CartasMar, CartasLeo, i,j, EscolhaMar, EscolhaLeo;
	while(scanf(" %li",&NumAtr) != EOF){
		scanf(" %li %li",&CartasMar, &CartasLeo);
		int BaralhoMar[CartasMar] [NumAtr];
		for(i = 0; i<CartasMar;i++){
			for(j = 0; j<NumAtr; j++){
				scanf(" %li", &BaralhoMar[i][j]);
			}
		}
		int BaralhoLeo[CartasLeo] [NumAtr];
		for(i = 0; i<CartasLeo;i++){
			for(j = 0; j<NumAtr; j++){
				scanf(" %li", &BaralhoLeo[i][j]);
			}
		}
		scanf(" %li %li",&EscolhaMar, &EscolhaLeo);
		scanf(" %li",&AtrSorteado);
		if(BaralhoLeo[EscolhaLeo-1][AtrSorteado-1]>BaralhoMar[EscolhaMar-1][AtrSorteado-1]){
			printf("Leonardo\n");
		}
		else if(BaralhoLeo[EscolhaLeo-1][AtrSorteado-1] == BaralhoMar[EscolhaMar-1][AtrSorteado-1]){
			printf("Empate\n");	
		}
		else printf("Marcos\n");
}
	return 0;
}