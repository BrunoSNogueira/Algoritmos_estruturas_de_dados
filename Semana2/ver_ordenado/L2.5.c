#include <stdio.h>

char repete(int V[], int n){
  for(int j = 0; j < n; j++){
    if(V[j] > V[j+1])
        return 'N';
    }
  }
  return 'N';
}


int main() {
    int V[1000000], i, n;
    i = 0;

    while(scanf("%d", &n)!=EOF) {
        repete(V, n);
    }
    return 0;
}
