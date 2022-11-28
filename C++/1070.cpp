#include <stdio.h>
int main() {
 int a,cont;
 scanf("%d",&a);
 if((a%2)==0){
 cont=a-1;
 while(cont!=(a+11)) printf("%i\n",cont+=2);
}
 else {
 	cont=a-2;
 	while(cont!=(a+10)) printf("%i\n",cont+=2);
 }
 return 0;
}