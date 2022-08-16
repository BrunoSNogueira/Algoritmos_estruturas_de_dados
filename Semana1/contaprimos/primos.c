#include <stdio.h>
#include <math.h>

int isPrimo(int n, int i){
  if(i == 1)
    return 1;
  else{
    if(n%i == 0)
      return 0;
    else
      isPrimo(n, i-1);
  }
}

int main (void){
  int i, n, sum = 0;
  scanf("%i", &n);
  int V[n];
  for(i = 0; i < n; i++)
    scanf("%i", &V[i]);

  for (i = 0; i < n; i++)
    if(V[i] != 1)
      sum += isPrimo(V[i], V[i]/2);

  printf("dos %i numeros informados %i eram primos\n", n, sum);
}
