#include <stdio.h>

/*
  Montar um tabuleiro de xadrez do tamanho fornecido, sendo 0 correspondente às casas
claras e números positivos somando um do anterior nas escuras.

  Caso tamanho fornecido seja "3 3" retorna-se:
  0 1 0
  2 0 3
  0 4 0
*/

int main(){
  int lin, col, x, y, cont, aux;
  x = y = 0;
  cont = aux = 1;

  scanf("%d %d", &lin, &col);

  for(int i = 0; i < lin; i++){
    for(int j = 0; j < col; j++){
      if(cont % 2 == 0){
        printf("%d ", aux);
        aux++;
      }
      else
        printf("0 ");
      cont++;
    }
    printf("\n");
    if(col % 2 == 0)
        cont++;
  }
}
