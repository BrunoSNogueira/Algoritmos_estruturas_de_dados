#include <stdio.h>

int Intercala(int p, int q, int r, int V[]){
  int i, j, k, comp, W[r-p];
  comp = 0;
  i = p;
  j = q;

  for(k=0; i < q && j < r; k++){
    if(V[i] < V[j]){
      W[k] = V[i];
      i++;
    }
    else{
      W[k] = V[j];
      j++;
    }
    comp++;
  }
  while(i < q){
    W[k] = V[i];
    k++;
    i++;
  }
  while(j < r){
    W[k] = V[j];
    k++;
    j++;
  }

  for(i = p; i < r; i++){
    V[i] = W[i-p];
  }
  return comp;
}

int MergeSort(int p, int r, int V[]){
  int comp = 0;
  if(r-p > 1){
    int q = (p+r)/2;
    comp += MergeSort(p, q, V);
    comp += MergeSort(q, r, V);
    comp += Intercala(p, q, r, V);
  }
  return comp;
}

void Preenche(int V[], int n){
  for(int i = 0; i < n; i++){
    scanf(" %d ", &V[i]);
  }
}

void Print_vet(int V[], int n){
  for(int i = 0; i < n; i++){
    printf("%d ", V[i]);
  }
  printf("\n");
}

int main(){
  int n, comp;
  scanf("%d", &n);
  int V[n];

  Preenche(V, n);
  Print_vet(V, n);
  comp = MergeSort(0, n, V);
  Print_vet(V, n);
  printf("Comparacoes: %d", comp);
}
