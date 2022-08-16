#include <stdio.h>

int preenche(int V[]){
  int i = 0;
  char temp;
  do{
    scanf("%d%c", &V[i], &temp);
    i++;
  }while(temp != '\n');
  return i;
}

void inverte(int men, int men2){
  int aux = men;
  men = men2;
  men2 = aux;
}

int seg_menor(int V[], int n){
  int men, men2;

  for(int i = 0; i < n; i++){
    if(i == 0) men = V[0];
    else if(i == 1){
      men2 = V[1];
      if(men > men2)inverte(men, men2);
    }
    else{
      if(V[i] < men2 && V[i] > men){
        men2 = V[i];
      }
      else if(V[i] < men){
        inverte(men, men2);
        men = V[i];
      }
    }
  }
  return men2;
}

int main(){
  int V[50], tam;

  tam = preenche(V);

  printf("%d", seg_menor(V, tam));
}
