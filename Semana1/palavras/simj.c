#include <stdio.h>
#include <string.h>
#define MAX 1000
#define VET 100

int n_palavras(char s[]){
  int p = 1;
  for(int i = 0; i <= strlen(s); i++)
    p++;
  return p;
}

void vetor_string(char s[], int n, char V[n][VET]){
  int p = 0, k = 0;
  for(int i = 0; i <= strlen(s); i++){
    if(s[i] == ' '){
      V[p][k] = '\0';
      p++;
      k = 0;
    }
    else
    V[p][k++] = s[i];
  }
}

int inter(int n1, char V1[n1][VET], int n2, char V2[n2][VET], char VI[n1+n2][VET]){
  int nI = 0;
  for(int i = 0; i < n1; i++){
    for(int j = 0; j < n2; j++)
      if(strcmp(V1[i], V2[j]) == 0)
        strcpy(VI[nI++], V1[i]);
  }
  return nI;
}

int uniao(int n1, char V1[n1][VET], int n2, char V2[n2][VET], char VU[n1+n2][VET]){
  int nU = 0;
  for(int i = 0; i < n1; i++){
    int presente = 0;
    for(int k = 0; k <= nU; k++)
      if(strcmp(V1[i], VU[k]) == 0)
        presente = 1;
    if(!presente)
      strcpy(VU[nU++], V1[i]);
  }

  for(int j = 0; j < n2; j++){
    int presente = 0;
    for(int k = 0; k <= nU; k++)
      if(strcmp(V2[j], VU[k]) == 0)
        presente = 1;
    if(!presente)
      strcpy(VU[nU++], V2[j]);
  }
  return nU;
}

void ordena(int n, char V[n][VET]){
  int iMin;
  char aux[VET];

  for(int i = 0; i < n-1; i++){
    iMin = i;
    for(int j = i+1; j < n; j++)
      if(strcmp(V[iMin], V[j]) > 0)
       iMin = j;
     strcpy(aux, V[iMin]);
     strcpy(V[iMin], V[i]);
     strcpy(V[i], aux);
  }
}

void print_vet(int n, char V[n][VET]){
  for(int i = 0; i < n; i++)
    printf("%s", V[i]);
  printf("\n");
}

int main(){
  char s1[MAX], s2[MAX];
  scanf("%[^\n] ", s1);
  scanf("%[^\n] ", s2);

  int n1 = n_palavras(s1);
  int n2 = n_palavras(s2);

  char V1[n1][VET];
  char V2[n2][VET];

  vetor_string(s1, n1, V1);
  vetor_string(s2, n2, V2);

  char VI[n1][VET];
  int nI = inter(n1, V1, n2, V2, VI);

  char VU[n1+n2][VET];
  int nU = uniao(n1, V1, n2, V2, VU);

  ordena(nI, VI);
  ordena(nU, VU);

  //impressão
  printf("Intersecao: ");
  print_vet(nI, VI);
  printf("Uniao: ");
  print_vet(nU, VU);

  printf("Similaridade = %.2f", (double)nI/nU);
}
