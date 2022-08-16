#include <stdio.h>
#include <string.h>
#include <math.h>

int tam_entrada(int in){
  int tam, casas;
  tam = casas = 1;
  while(in >= tam){
    tam = tam*10;
    casas++;
  }
  return --casas;
}

int main(){
  int n, in, tam, num;
  scanf("%d", &in);
  scanf("%d", &n);

  tam = tam_entrada(in);
  printf("%d", tam);
  for(int i = tam; i > 0; i--){
    num = in/pow(10, i);
    for(int j = 0; j < n; j++){
      printf("%d ", num);
    }
    in -= num*pow(10, i);
    printf("\n");
  }

}
