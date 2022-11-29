#include<stdio.h>
#include<math.h>
#include<string.h>

int main (){
 char str[500];
  fgets(str,500,stdin);
  if((strlen(str))<142) printf("TWEET\n");
  else printf("MUTE\n");
return 0;
}