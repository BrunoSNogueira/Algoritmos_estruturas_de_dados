#include <stdio.h>

int main(){
  int indlinha, indcoluna, limlinha, limcoluna, tam, cont;
  indlinha = indcoluna = cont = 0;
  scanf("%d", &tam);
  limlinha = limcoluna = tam;
  int M[tam][tam];

  while (indlinha < limlinha && indcoluna < limcoluna){
    for (int i = indcoluna; i < limcoluna; ++i){
      M[indlinha][i] = cont++;
    }

    for (int i = ++indlinha; i < limlinha; ++i){
      M[i][limlinha-1] = cont++;
    }
    limcoluna--;

    if (indlinha < limlinha){
      for (int i = limcoluna-1; i >= indcoluna; --i){
        M[limlinha-1][i] = cont++;
      }
      limlinha--;
    }
    if (indcoluna < limcoluna){
      for (int i = limlinha-1; i >= indlinha; --i){
        M[i][indcoluna] = cont++;
      }
      indcoluna++;
    }
  }
    //print matriz
  for(int i = 0; i < tam; i++){
    for(int j = 0; j < tam; j++)
      printf("%d ", M[i][j]);
    printf("\n");
  }
}
