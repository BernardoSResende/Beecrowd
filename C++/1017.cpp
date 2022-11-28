#include <stdio.h>
 
int main() {
  int tempo,vel;
  scanf ("%d",&tempo);
  scanf ("%d",&vel);
  printf("%.3f\n", (tempo*vel)/12.0);
  
  return 0;
}