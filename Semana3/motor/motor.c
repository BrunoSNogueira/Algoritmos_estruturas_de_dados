#include <stdio.h>

int main(){
  int n, in, ant, ind;
  ind = 0;
  scanf("%d", &n);

  for(int i = 1; i <= n; i++){
    scanf("%d", &in);
    if(i == 0)
      ant = in;
    if(in < ant){
      ind = i;
      break;
    }
  }
  printf("%d", ind);
}
