#include<stdio.h>
#include<string.h>

int main(){
    int recebe,round, contFink = 0,contPica = 0,divididos=0;
    scanf(" %d", &recebe);
    while(recebe != 0){
            for(round = 1;round <= recebe;round++){
                contPica++;
                divididos++;
                for(int j=0;j<round;j++){
                    if(divididos == recebe){
                        contFink++;
                        contPica--;
                    }
                    else{
                        contFink++;
                        divididos++;
                    }
                }
                if(divididos==recebe) break;
            }
            printf("%d %d\n", contFink,contPica);
            scanf(" %d",&recebe);
            contFink = 0;
            contPica = 0;
            divididos = 0;
            
    }
    return 0;
}