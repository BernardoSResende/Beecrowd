#include<stdio.h>
#include<string.h>

int main(){
    char mensagem[10001];
    char crib[10001];
    int contLugares = 0;
    int round = 0;
    int numRounds;
    int impossivel;
    scanf(" %s %s", mensagem,crib);
    numRounds = (strlen(mensagem) - strlen(crib) +1);
    for(round=0; round<numRounds;round++){
        impossivel = 0;
        for(int i = 0; i<strlen(crib);i++){
            if(crib[i] == mensagem[i+round]){
                impossivel = 1;
                break;
            }
        }
        if(!impossivel) contLugares++;
    }
    printf("%d\n",contLugares);
    return 0;


}