#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char frase[1001], palavra[1001];
    int numvezes = 0;

    fgets(frase, 1001, stdin);
    fgets(palavra, 1001, stdin);
    frase[strlen(frase) - 1] = '\0';
    palavra[strlen(palavra) - 1] = '\0';

    for(int i = 0; i < strlen(frase) - strlen(palavra)+1; i++){
        for (int j = 0; j < strlen(palavra); j++){
            if (palavra[j] != frase[i + j]){
                break;
            }else if (j == strlen(palavra) - 1){
                numvezes = numvezes + 1;
            }
        }
    }

    printf("%d\n", numvezes);
}
