#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define MAX 50

char* Codifica(char *I, char *O){
    int sum = 1;
    char num[3];

    for(int i = 0; i < strlen(I); i++){
      if(I[i] == I[i+1]){
        sum++;
      }
      else{
        if(sum == 1){
          printf("%c", I[i]);
        }
        else if(sum == 2){
          printf("%c", I[i]);
          printf("%c", I[i]);
          sum = 1;
        }
        else{
          printf("%c", I[i]);
          sprintf(num, "%d", sum);
          printf("%s", num);
          sum = 1;
        }
        memset(num, '\0', 3);
      }
    }
    return O;
}

char* Decodifica(char *I, char *O){
  //variavel para conversão de numero em string para numero em int
  int num;
  printf("%c", I[0]);

  for(int i = 0; i < strlen(I); i++){
    char strnum [3];
    num = 0;
    if(isdigit(I[i+1])){
        int aux = 0;
        //verifica quantos digitos tem o numero e monta string
        while(isdigit(I[i+aux+1]) != 0){
            strnum[aux] = I[i+aux+1];
            aux++;
        }
        //converte para int
        num = (int)strtol(strnum, NULL, 10);
        for(int j = 0; j < num; j++)
            printf("%c", I[i]);
    }
    else{
        printf("%c", I[i+1]);
    }
  }
  return O;
}

int main(){
    int codigo;
    char I[MAX];
    char O[MAX];
    scanf(" %d ", &codigo);
    scanf(" %s ", I);

    switch(codigo){
        case 1:
            Codifica(I, O);
            //for(int i = 1; i < strlen(O); i++)
              //printf("%c", O[i]);
            printf("\n");
            break;
        case 2:
            Decodifica(I, O);
            for(int i = 0; i < strlen(O); i++)
              printf("%c", O[i]);
            printf("\n");
            break;
        default:
            printf("Codigo desconhecido\n");
            break;
    }
}
