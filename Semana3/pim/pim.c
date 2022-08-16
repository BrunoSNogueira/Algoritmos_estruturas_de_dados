#include <stdio.h>

int main(){
  int l, n;
  n = 1;
  scanf("%d", &l);

  while(n <= 4*l){
    if(n % 4 == 0)
      printf("PIM\n");
    else
      printf("%d ", n);
    n++;
  }
}
