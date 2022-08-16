#include <stdio.h>

void PrintVet(int V[], int n){
  for(int i = 1; i < n; i++)
    printf("%d ", V[i]);
  printf("\n");
}

void MaxHeapfy (int V[], int m, int i){
  int e, d, maior, aux;
  e = 2*i;
  d = 2*i+1;

  if(e <= m && V[e] > V[i])
    maior = e;
  else maior = i;

  if(d <= m && V[d] > V[maior])
    maior = d;

  if(maior != i){
    aux = V[maior];
    V[maior] = V[i];
    V[i] = aux;

    MaxHeapfy(V, m, maior);
  }
}

void BuildMaxHeap(int V[], int n){
  for(int i = n/2; i >= 1; i--)
    MaxHeapfy(V, n, i);
}

void HeapSort(int V[], int n){
  int i, m, aux;

  BuildMaxHeap(V, n);
  PrintVet(V, n+1);
  m = n;

  for(i = n; i >= 2; i--){
    //printf("n: %d, i: %d, V[i]: %d, V[1]: %d \n", n, i, V[i], V[1]);
    aux = V[i];
    V[i] = V[1];
    V[1] = aux;
    m--;
    MaxHeapfy(V, m, 1);
    PrintVet(V, m+1);
  }
}

int main(){
  int n;
  scanf(" %d ", &n);

  int V[n+1];
  for(int i = 1; i < n+1; i++){
    scanf("%d", &V[i]);
  }
  PrintVet(V, n+1);

  HeapSort(V, n);
  printf("\n");
  PrintVet(V, n+1);
}
