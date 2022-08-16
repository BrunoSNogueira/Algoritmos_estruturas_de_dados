#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
typedef struct Node Node;

Node *adicionarElementoNoFinalDaLista(int valor, Node *inicio) {
    Node *novo = (Node *) malloc(sizeof(Node));
    if (novo==NULL)
      return inicio;
    novo->data = valor;
    novo->next = NULL;

    if (inicio==NULL)
      return novo;

    Node *atual = inicio;
    while (atual->next!=NULL)
      atual = atual->next;
    atual->next = novo;

    return inicio;
}

void liberarListaLigada(Node* lista) {
    while (lista!=NULL) {
        Node* t = lista;
        lista = lista->next;
        free(t);
    }
}

void imprimirListaLigada(Node *lista){
   Node *atual = lista;
    while (atual->next!=NULL){
        printf("%d\n", atual->data);
        atual = atual->next;
    }
    printf("%d\n", atual->data);
}

int main(void) {
  int n, i, valor;
  Node *lista=NULL;

  scanf("%d", &n);
  for (i=0; i<n; i++){
    scanf("%d", &valor);
    lista = adicionarElementoNoFinalDaLista(valor, lista);
  }

  imprimirListaLigada(lista);
  liberarListaLigada(lista);
  return 0;
}
