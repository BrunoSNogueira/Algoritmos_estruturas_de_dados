#include <stdio.h>

void preenche(int V[], int n){
  for(int i = 0; i < n; i++)
    scanf("%d", &V[i]);
}

void verifica_vizinhos(int V[], int n){
  for(int i = 0; i < n; i++)
    if(V[i] == V[i+1])
      printf("Pos %d e %d\n", i, i+1);
}

int main(){
  int n;
  scanf("%d", &n);
  int V[n];

  preenche(V, n);
  verifica_vizinhos(V, n);
}
