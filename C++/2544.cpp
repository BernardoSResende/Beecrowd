#include <stdio.h>
#include <math.h>

int main(){
  int i,cont;
  while(scanf(" %d",&i) != EOF){
    cont = 0;
    if(i == 0) printf("0\n");
    else if (i == 1) printf("0\n");
    else {
      while(i!=1){
      i = i/2;
      cont++;
    }
      printf("%d\n",cont);
    }
    }
  return 0;
}