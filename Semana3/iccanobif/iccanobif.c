#include <stdio.h>

void print_iccanobif(int fib[], int n){
  for(int i = n-1; i >= 0; i--){
    printf("%d ", fib[i]);
  }
}

void fibonacci(int fib[], int n){
  fib[0] = fib[1] = 1;
  for(int i  = 2; i < n; i++){
    fib[i] = fib[i-1] + fib[i-2];
  }
}

int main(){
  int n;
  scanf("%d", &n);
  int fib[n];

  fibonacci(fib, n);
  print_iccanobif(fib, n);
}
