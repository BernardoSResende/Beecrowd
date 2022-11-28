#include <stdio.h>
 
int main() {
 
 char nome[50];
 double salario,vendas;
 fgets(nome, 50, stdin);
 scanf("%lf", &salario);
 scanf("%lf", &vendas);
  printf("TOTAL = R$ %.2lf\n", (salario + (vendas*0.15)));
 return 0;
}