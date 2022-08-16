#include <stdio.h>

void preenche(int V[], int n){
  for(int i = 0; i < n; i++)
    scanf(" %d ", &V[i]);
}

void semipart(int V[], int n){
  int aux;
  for(int i = 0; i < n/2; i++){
    if(V[i] > V[n-1-i]){
      aux = V[i];
      V[i] = V[n-1-i];
      V[n-1-i] = aux;
    }
  }
}

void printvet(int V[], int n){
  printf("[");
  for(int i = 0; i < n; i++){
    printf("%d", V[i]);
    if(i < n-1)
      printf(", ");
  }
  printf("]");
}

int main(){
  int n;
  scanf(" %d ", &n);
  int V[n];

  preenche(V, n);
  printvet(V, n);
  semipart(V, n);
  printvet(V, n);
}
