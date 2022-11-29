#include<stdio.h>

int main (){
int num;
while (scanf("%i",&num)!= EOF){
	if (num==0) printf("vai ter copa!\n");
	else printf("vai ter duas!\n");
}
return 0;
}