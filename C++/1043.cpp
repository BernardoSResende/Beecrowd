#include <stdio.h>
#include <math.h>
int main() {
    float x,y,z;
    scanf ("%f %f %f",&x,&y,&z);
    if ((x+y)>z && (x+z)>y && (y+z)>x && (x-y)<z && (x-z)<y && (y-z)<x) printf("Perimetro = %.1f\n", x+y+z);
    else printf("Area = %.1f\n",(x+y)*z/2);
   	return 0;
   	
   	
   }