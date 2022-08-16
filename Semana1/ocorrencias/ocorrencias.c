#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

int main(){
  int j = 0,sum = 0;
  char *A, *B;
  A = (char*)malloc(sizeof(char)*MAX);
  B = (char*)malloc(sizeof(char)*MAX);

  fgets(A, MAX, stdin);
  fgets(B, MAX, stdin);

  for(int i = 0; i <= strlen(A)-strlen(B); i++){
    for(j = 0; j < strlen(B)-1; j++)
      if(A[i+j] != B[j])
        break;

    if(j == strlen(B)-1)
      sum++;
    }

    printf("%d\n", sum);
}
