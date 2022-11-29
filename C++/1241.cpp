#include <stdio.h>
#include <string.h>

int main(){
    char numG[1001];
    char numP[1001];
    int numCasos;
    int dif;
    scanf(" %d",&numCasos);
    for(int i=0;i<numCasos;i++){
        scanf(" %s %s",numG,numP);
        int impossivel = 0;
        if(strlen(numP)>strlen(numG)){
            printf("nao encaixa\n");
        }
        else{
           dif= strlen(numG) - strlen(numP);
           for(int j =0;j<strlen(numP);j++){
               if(numP[j]!=numG[j+dif]){
                   impossivel ++;
                   break;
               }
           }
           if(impossivel)
           printf("nao encaixa\n");
           else printf("encaixa\n");
        }
    }
    return 0;
}