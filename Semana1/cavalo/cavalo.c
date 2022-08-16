#include <stdio.h>

int main(){
  int at[2], xy[8];
  int ordem[8] = {0, 2, 1, 5, 3, 7, 4, 6};
  int aux = 0;
  scanf("%d %d", &at[0], &at[1]);

  for(int i = -2; i <= 2; i+=4){
    for(int j = -1; j <= 1; j+=2){
      if(at[0]+i >= 0
        && at[0]+i <= 7
        && at[1]+j >= 0
        && at[1]+j <= 7){

        xy[aux] = (at[0]+i)*8 + (at[1]+j);
        aux++;
      }
      else{
        xy[aux] = -1;
        aux++;
      }

      if(at[0]+j >= 0
        && at[0]+j <= 7
        && at[1]+i >= 0
        && at[1]+i <= 7){

        xy[aux] = (at[0]+j)*8 + (at[1]+i);
        aux++;
      }
      else{
        xy[aux] = -1;
        aux++;
      }
    }
  }
  for(int i = 0; i < 8; i++){
    if(xy[ordem[i]] != -1)
      printf("%d %d\n", (int)xy[ordem[i]]/8, xy[ordem[i]]%8);
  }
}
