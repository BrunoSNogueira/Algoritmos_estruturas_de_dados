#include <stdio.h>

void PrintVet(int V[], int n){
  for(int i = 0; i < n; i++){
    printf("[%d]%d\n", i, V[i]);
  }
}

int main(){
  int n = 1;

  while(n != 0){
    int maior = -1;
    scanf("%d", &n);
    if(n == 0) break;

    int V[n];
    for(int i = 0; i < n; i++){
      scanf("%d", &V[i]);
      if(V[i] > maior)
        maior = V[i];
    }

    int Aux[maior+1];
    for(int i = 0; i <= maior; i++)
        Aux[i] = 0;
    for(int i = 0; i < n; i++)
      Aux[V[i]]++;

    PrintVet(Aux, maior+1);
  }
}
