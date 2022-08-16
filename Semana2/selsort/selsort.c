#include <stdio.h>

void print_vet(int V[], int n){
  for(int l = 0; l < n; l++){
    printf("%d ", V[l]);
  }
  printf("\n");
}

void sort_vet(int V[], int n){
  int min, aux, cont;
  cont = 0;

  for(int j = 0; j < n; j++){
    min = j;
    for(int k = j+1; k < n; k++)
      if(V[min] > V[k]){
        min = k;
      }

    if(min != j){
      aux = V[min];
      V[min] = V[j];
      V[j] = aux;
      cont++;
    }
    print_vet(V, n);
  }
  printf("%d\n", cont);
}

void main() {
  int n;
  int V[10000];

  scanf(" %d ", &n);
  for(int i = 0; i < n; i++)
    scanf("%d ", &V[i]);
  print_vet(V, n);
  sort_vet(V, n);
}
