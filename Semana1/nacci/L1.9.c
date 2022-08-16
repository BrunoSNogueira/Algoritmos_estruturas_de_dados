#include <stdio.h>
#include <string.h>

int tri_tetra_nacci(int n, char* nome) {
  if(!strcmp(nome, "Tribonacci")){
    if(n < 2)
      return 0;
    if(n == 2)
      return 1;
    return tri_tetra_nacci(n-1, nome)
      + tri_tetra_nacci(n-2, nome)
      + tri_tetra_nacci(n-3, nome);
  }
  else if(!strcmp(nome, "Tetranacci")){
    if(n < 3)
      return 0;
    if(n == 3)
      return 1;
      return tri_tetra_nacci(n-1, nome)
        + tri_tetra_nacci(n-2, nome)
        + tri_tetra_nacci(n-3, nome)
        + tri_tetra_nacci(n-4, nome);
  }
  else
    return -1;
}

int main(void) {
    char nome[100];
    int resposta, n;

    scanf("%s", nome);
    scanf("%d", &n);

    resposta = tri_tetra_nacci(n, nome);
    if (resposta==-1)
        printf("SEQUENCIA DESCONHECIDA\n");
    else
        printf("%d\n", resposta);

    return 0;
}
