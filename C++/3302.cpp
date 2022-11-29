#include <stdio.h>

int main(){
    int numCasos,num;
    scanf(" %d",&numCasos);
    for(int i=1;i<=numCasos;i++){
        scanf(" %d",&num);
        printf("resposta %d: %d\n",i,num);
    }
    return 0;
}