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
        char let[2];
        let [0] = I[i];

        if(sum == 1){
          strcat(O, let);
        }
        else if(sum == 2){
          strcat(O, let);
          strcat(O, let);
          sum = 1;
        }
        else{
          strcat(O, let);
          sprintf(num, "%d", sum);
          strcat(O, num);
          sum = 1;
        }
        memset(let, '\0', 2);
        memset(num, '\0', 3);
      }
    }
    return O;
}

char* Decodifica(char *I, char *O){
  //variavel para conversão de numero em string para numero em int
  int num;
  O[0] = I[0];

  for(int i = 0; i < strlen(I); i++){
    num = 0;
    if(isdigit(I[i+1])){
      int aux = 1;
      while(isdigit(I[i+aux+1]) != 0)
        aux++;
      //conversão do numero em string para centena, dezena e unidade
      for(int j = 0; j < aux; j++)
        num += (I[i + aux - j]-'0')*(int)pow(10, j);

      char rep[num];
      for(int j = 0; j < num - 1; j++)
        rep[j] = I[i];
      strcat(O, rep);
    }
    else{
      char rep[2];
      rep[0] = I[i+1];
      strcat(O, rep);
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
            for(int i = 1; i < strlen(O); i++)
              printf("%c", O[i]);
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
