#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int numFreqs,freq1,freq2;
    int primeirafreq;
    scanf(" %d", &numFreqs);
    while(numFreqs != 0){
      int subindo = 0;
      int freqs[numFreqs];
      int contPicos = 0;
      for(int i = 0;i<numFreqs;i++){
        scanf(" %d",&freqs[i]);
        if(i!=0){
          if((freqs[i] > freqs[i-1]) && !subindo){
            contPicos++;
            subindo = 1;
          }
          else if((freqs[i]<freqs[i-1]) && subindo){
            contPicos++;
            subindo = 0;
          }
        }
        else{
          i++;
          scanf(" %d",&freqs[i]);
          if(freqs[i]> freqs[i-1]) subindo = 1;
          else subindo = 0;
        }
        }
      if((freqs[0] > freqs[numFreqs-1]) && !subindo){ contPicos++;
  subindo = 1;
        }
      else if((freqs[0]<freqs[numFreqs-1]) && subindo) {contPicos++;
        subindo = 0;
        }
      if((freqs[1]>freqs[0]) && !subindo) contPicos++;
      else if((freqs[1]<freqs[0]) && subindo)contPicos++;
      printf("%d\n",contPicos);
      scanf(" %d",&numFreqs);
    }
  return 0;
}