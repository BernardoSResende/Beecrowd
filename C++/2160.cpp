#include<stdio.h>
#include<math.h>
#include<string.h>

int main (){
char str[500];
scanf("%[^\n\r]", str);
if(strlen(str)<81) printf("YES\n");
else printf("NO\n");

return 0;
}