#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
  // 0 eh pedra 1 eh papel 2 eh tesoura
  int indices[3],i;
  char jogD[10],jogL[10],jogP[10];
  while(scanf(" %s %s %s", jogD, jogL, jogP) != EOF){
      if((!strcmp(jogD,"tesoura") &&
          !strcmp(jogL,"papel") &&                   
          !strcmp(jogP,"papel")) ||
         (!strcmp(jogD,"papel") &&                      
          !strcmp(jogL,"pedra") &&                  
          !strcmp(jogP,"pedra")) ||
         (!strcmp(jogD,"pedra") &&                   
          !strcmp(jogL,"tesoura") &&                 
          !strcmp(jogP,"tesoura"))) printf("Os atributos dos monstros vao ser inteligencia, sabedoria...\n");
 else if((!strcmp(jogD,"papel") &&                 
          !strcmp(jogL,"tesoura") &&                   
          !strcmp(jogP,"papel")) ||
         (!strcmp(jogD,"tesoura") &&                   
          !strcmp(jogL,"pedra") &&                   
          !strcmp(jogP,"tesoura")) ||
         (!strcmp(jogD,"pedra") &&                   
          !strcmp(jogL,"papel") &&                 
          !strcmp(jogP,"pedra"))) printf("Iron Maiden's gonna get you, no matter how far!\n");
  else if((!strcmp(jogD,"papel") &&                 
          !strcmp(jogL,"papel") &&                   
          !strcmp(jogP,"tesoura")) ||
         (!strcmp(jogD,"tesoura") &&                   
          !strcmp(jogL,"tesoura") &&                   
          !strcmp(jogP,"pedra")) ||
         (!strcmp(jogD,"pedra") &&                   
          !strcmp(jogL,"pedra") &&                 
          !strcmp(jogP,"papel"))) printf("Urano perdeu algo muito precioso...\n");
          else printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
  }
  return 0;
}
