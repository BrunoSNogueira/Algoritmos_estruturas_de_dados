#include <stdio.h>
#include <string.h>
#define MAX 30

void rotaDireita(char V[], int n){
  if(n != 1){
    //complementar de n
    int ncomp = strlen(V)-n+1;
    int aux = 0;

    printf("Rotacao %d: ", ncomp);
    for(int i = 0; i < strlen(V); i++){
      if(ncomp + i < strlen(V))
        printf("%c ", V[ncomp+i]);
      else{
        printf("%c ", V[aux]);
        aux++;
      }
    }
    printf("\n");

    rotaDireita(V, n-1);
  }
  else return;
}

void rotaEsquerda(char V[], int n){
  if(n != 1){
    //complementar de n
    int ncomp = strlen(V)-n+1;
    int aux = n-1;

    printf("Rotacao %d: ", ncomp);
    for(int i = 0; i < strlen(V); i++){
      if(aux < strlen(V)){
        printf("%c ", V[aux]);
        aux++;
      }
      else
        printf("%c ", V[i-ncomp]);
    }
    printf("\n");

    rotaEsquerda(V, n-1);
  }
  else return;
}

int main (){
  int n;
  char dir, V[MAX];

  scanf("%c ", &dir);
  fgets(V, MAX, stdin);
  n = strlen(V);
  for(int i = 0; i < n; i++){
    //Remove espaços
    if(V[i] == ' '){
      for(int j = i; j < n; j++)
        V[j] = V[j+1];
      n--;
    }

    //Remove \n
    else if(V[i] == '\n'){
      V[i] = '\0';
      n--;
    }
  }

  //print do vetor
  printf("Vetor : ");
  for(int i = 0; i < n; i++)
    printf("%c ", V[i]);
  printf("\n");

  if(n > 1){
    if(dir == 'D') rotaDireita(V, n);
    else if (dir == 'E') rotaEsquerda(V, n);
  }
  else
    printf("NENHUMA ROTACAO POSSIVEL");
}
