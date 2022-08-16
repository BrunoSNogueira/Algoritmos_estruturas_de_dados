#include <stdio.h>

void print_vet(int V[], int n){
  for(int l = 0; l < n; l++){
    printf("%d ", V[l]);
  }
  printf("\n");
}

int b_sort(int V[], int n){
  int i, aux, change, cont;
  cont = 0;

  do{
    change = 0;
    for(i = 0; i < n-1; i++){
      if(V[i] > V[i+1]){
        aux = V[i];
        V[i] = V[i+1];
        V[i+1] = aux;
        change = 1;
        print_vet(V, n);
        cont++;
      }
    }
    print_vet(V, n);
  }while(change == 1);
  return cont;
}

int main(){
  int n, trocas;
  int V[10000];

  scanf(" %d ", &n);
  for(int i = 0; i < n; i++)
    scanf("%d ", &V[i]);
  print_vet(V, n);
  printf("Trocas:%d ", b_sort(V, n));
}
