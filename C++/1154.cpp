#include <stdio.h>
int main() {
 int idade,numerodeidades=0,somatorio=0;
 float media;
 scanf("%d",&idade);
 while(idade>=0){
 	numerodeidades++;
 	somatorio=somatorio+idade;
 	scanf("%d",&idade);
 }
 printf("%.2f\n",(somatorio+0.00)/numerodeidades);


 return 0;
}