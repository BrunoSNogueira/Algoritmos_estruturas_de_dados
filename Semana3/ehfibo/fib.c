#include <stdio.h>

int main(){
  int n, fib, fib2, aux;
  fib = fib2 = 1;
  scanf("%d", &n);

  while(fib2 < n){
    aux = fib;
    fib = fib2;
    fib2 = fib + aux;
    printf("fib: %d\n", fib2);
  }

  if(fib2 == n || n == 0 || n == 1)
    printf("Verdadeiro");
  else
    printf("Falso");
}
