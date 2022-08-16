#include <stdio.h>
#include <string.h>

// Observação: Não devem ser utilizadas variáveis globais

//////////////////////////////////////////////////////////////////////////////////
// Este exercício requer que seja implementada a seguinte função com a assinatura
//////////////////////////////////////////////////////////////////////////////////
int soma_elementos(int vetor[], int n) {
    int soma;
    if(n == 0) return vetor[0];
    soma += soma_elementos(vetor, n-1)
}

//////////////////////////////////////////////////////////////////////////////////
// As seguintes linhas não devem ser modificadas
//////////////////////////////////////////////////////////////////////////////////
int carregar_vetor(char linha[], int vetor[]) {
    int tamanho=0, n=0, sinal=1;
    for (int i=0; i<strlen(linha); i++)
        if (linha[i]==' ') {
            vetor[tamanho++] = n*sinal;
            n = 0;
            sinal = 1;
        } else if (linha[i]=='-')
            sinal = -1;
        else
            n = (linha[i]-48) + n*10;

    vetor[tamanho++] = n*sinal;
    return tamanho;
}

int main(void) {
    int vetor[1000];
    char linha[1000];
    scanf("%[^\n]%*c", linha);

    int n = carregar_vetor(linha, vetor);

    printf("%d\n", soma_elementos(vetor, n));
    return 0;
}
