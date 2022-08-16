#include <stdio.h>

void print_vet(int V[], int n){
  for(int l = 0; l < n; l++){
    printf("%d ", V[l]);
  }
  printf("\n");
}

int sort_vet(int V[], int n){
  int j, aux, aux2, cont;
  cont = 0;

  for(int i = 1; i < n; i++){
    aux = V[i];

    j = i - 1;
    for(j; j >= 0 && V[j] > aux; j--){
      aux2 = V[j+1];
      V[j+1] = V[j];
      V[j] = aux2;
      print_vet(V, n);
      cont++;
    }
    V[j+1] = aux;
  }
  return cont;
}

void main(){
  int n, trocas;
  int V[10000];

  scanf(" %d ", &n);
  for(int i = 0; i < n; i++)
    scanf("%d ", &V[i]);
  print_vet(V, n);

  trocas = sort_vet(V, n);
  print_vet(V, n);
  printf("Trocas:%d\n", trocas);

  if(trocas == 0)
    printf("MELHOR CASO\n");
  else if(trocas == (n*n/2 - n/2))
    printf("PIOR CASO\n");
  else
    printf("CASO ALEATORIO\n");
}
