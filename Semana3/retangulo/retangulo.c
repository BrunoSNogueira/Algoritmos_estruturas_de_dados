#include <stdio.h>

int main(){
  int l, c;
  scanf("%d", &l);
  scanf("%d", &c);

  for(int i = 0; i < l; i++){
    for(int j = 0; j < c; j++){
      if(j == c-1)
        printf("*\n");
      else if(i == 0 || i == l-1 || j == 0)
        printf("*");
      else
        printf(" ");
    }
  }
}
