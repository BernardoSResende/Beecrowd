#include <stdio.h>
#include <string.h>

int main(){
    char frase[30];
    scanf(" %s",frase);
    if(strlen(frase)>=10) printf("palavrao\n");
    else printf("palavrinha\n");
    return 0;
}