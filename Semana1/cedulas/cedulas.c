#include <stdio.h>

int cedulas(int *n, int ced){
  int ret = *n/ced;
  *n = (*n)%ced;
  return ret;
}

int main(){
  int n;
  scanf("%i", &n);

  printf("%i nota(s) de R$ 100\n", cedulas(&n, 100));
  printf("%i nota(s) de R$ 50\n", cedulas(&n, 50));
  printf("%i nota(s) de R$ 20\n", cedulas(&n, 20));
  printf("%i nota(s) de R$ 10\n", cedulas(&n, 10));
  printf("%i nota(s) de R$ 5\n", cedulas(&n, 5));
  printf("%i nota(s) de R$ 2\n", cedulas(&n, 2));
  printf("%i nota(s) de R$ 1\n", cedulas(&n, 1));
}
