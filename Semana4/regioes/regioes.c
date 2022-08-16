#include <stdio.h>

int Regioes(int c){
  if(c == 0)return 1;
  return(c + Regioes(c-1));
}

int main(){
  int c;
  scanf("%d", &c);
  printf("%d\n", Regioes(c));
}
