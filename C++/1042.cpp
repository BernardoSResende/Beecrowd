#include <stdio.h>

int main() {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(x<y && x<z){
    	printf("%i\n",x);
    	if(y<z) {
		printf("%i\n",y);
		printf("%i\n",z);
	            }
    	else {
		printf("%i\n",z);
		printf("%i\n",y);
	}
}
    	
	
    if(y<x && y<z){
    	printf("%i\n",y);
    	if(x<z) {
		printf("%i\n",x);
		printf("%i\n",z);
	}
    	else {
		printf("%i\n",z);
		printf("%i\n",x);
	}
}
    	
    if(z<y && z<x){
    	printf("%i\n",z);
    	if(y<x) {
		printf("%i\n",y);
		printf("%i\n",x);
	}
    	else {
		printf("%i\n",x);
		printf("%i\n",y);
	}
}
	printf("\n");
	printf("%i\n",x);
	printf("%i\n",y);
	printf("%i\n",z);
    	
   	return 0;
   	
   	
   }
 
 