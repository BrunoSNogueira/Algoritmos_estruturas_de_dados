#include <stdio.h>

char repete(int V[], int n){
  int ver = 1;
  for(int j = 0; j < n; j++){
    for(int k = j + 1; k < n; k++){
      if(V[j] == V[k])
        return 'S';
    }
  }
  return 'N';
}

int main(){
  int i = 0;
  int V[1000];

  while(scanf("%d ", &V[i]) != EOF)
    i++;

  printf("%c", repete(V, i));
}
