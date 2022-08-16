#include <stdio.h>

void compara(int X[], int n, int k){
  int ver = 0;

  for(int i = 0; i < n; i++){
    for(int j = i+1; j < n; j++){
      if(X[i] + X[j] == k){
        ver = 1;
        printf("X[%d] + X[%d] = %d\n", i, j, k);
      }
      if(j == 2)break;
    }
  }
  if(ver == 0) printf("NENHUM PAR SOMA %d\n", k);
}

int main() {
  int X[50], k, i;
  char temp;

  do{
    scanf("%d%c", &X[i], &temp);
    i++;
  }while(temp != '\n');
  scanf("%d", &k);

  compara(X, i+1, k);
  return 0;
}
