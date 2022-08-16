#include <stdio.h>
#include <stdlib.h>

int Particione(int A[], int p, int r){
  int i, j, x, aux;

  x = A[r];
  i = p-1;

  for(j = p; j < r-1;  j++){
    if(A[j] <= x){
      i++;
      aux = A[i];
      A[i] = A[j];
      A[j] = aux;
    }
  }
  aux = A[i+1];
  A[i+1] = A[r];
  A[r] = aux;

  return i+1;
}

int QuickSort(int A[], int p, int r){
  int comp = 0;
  if(p < r){
    int q = Particione(A, p, r);
    comp = r-p;
    comp += QuickSort(A, p, q-1);
    comp += QuickSort(A, q+1, r);
  }
  return comp;
}

void PrintVet(int A[], int n){
  for(int i = 0; i < n; i++){
    printf("%d ", A[i]);
  }
  printf("\n");
}

int main(){
  int n, comp;
  scanf("%d", &n);
  int V[n];

  for(int i = 0; i < n; i++){
    scanf(" %d ", &V[i]);
  }

  PrintVet(V, n);
  comp = QuickSort(V, 0, n-1);
  PrintVet(V, n);
  printf("Comparacoes: %d\n", comp);
}
