#include <stdio.h>
#include <string.h>

void combina(char* a, char* b, char* c){
  int tamanhoA = strlen(a), tamanhoB = strlen(b), j = 0, k = 0;

  for(int i = 0; i < tamanhoA+tamanhoB; i++){
    if(k == tamanhoA){
      char *fimB = b + j;
      strncat(c, fimB, (tamanhoB - j));
      break;
    }
    else if(j == tamanhoB){
      char *fimA = a + k;
      strncat(c, fimA, (tamanhoA-k));
      break;
    }
    else{
      char *fimA = a + k; // nova string q inicia na letra desejada
      char *fimB = b + j;
      strncat(c, fimA, 1); // concatena string q inicia na letra desejada
      strncat(c, fimB, 1); // e para nela mesma (logo add só a letra)
      k++;
      j++;
    }
  }
}

int main() {
  char a[100];
  char b[100];
  char c[200] = "";

  scanf("%s", a);
  scanf("%s", b);

  combina(a, b, c);
  printf("%s\n", c);

  return 0;
}
