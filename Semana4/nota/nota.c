#include <stdio.h>

int media(int V[], int k, int n){
  int soma = 0;
  for(int i = n-1; i > n-1-k; i--){
    soma += V[i];
  }
  return soma/k;
}

void Intercala(int p, int q, int r, int V[]){
  int i, j, k, comp, W[r-p];
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
}

void MergeSort(int p, int r, int V[]){
  if(r-p > 1){
    int q = (p+r)/2;
    MergeSort(p, q, V);
    MergeSort(q, r, V);
    Intercala(p, q, r, V);
  }
}

int main(){
  int n, k, i = 0;
  char temp;
  scanf("%d %d", &n, &k);

  int notas[n];
  do{
    scanf("%d%c", &notas[i], &temp);
    i++;
  }while(temp != '\n');

  MergeSort(0, n, notas);

  printf("%d", media(notas, k, n));
}
