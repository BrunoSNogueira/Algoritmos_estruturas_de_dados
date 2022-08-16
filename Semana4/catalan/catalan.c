#include <stdio.h>

int Catalan(int n){
  int num = 0;

  if(n <= 1)return 1;

  for(int i = 0; i < n; i++)
    num += Catalan(i) * Catalan(n-1-i);
  return num;
}

int main(){
  int in;
  scanf("%d", &in);
  printf("%d", Catalan(in));
  return 0;
}
