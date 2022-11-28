#include <stdio.h>
#include <math.h>
 
int main() {
 
  int A,B,C,AB,ABC;
  scanf("%d %d %d",&A,&B,&C);
  
  AB = ((A+B+abs(A-B))/2);
  ABC = ((AB+C+abs(AB-C))/2);
  
  printf("%i eh o maior\n", ABC);
  
  
  
  
  return 0;

}