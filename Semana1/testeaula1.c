#include <stdio.h>
int Palindromo(int V[], int n){
	int i = n/2;
	
	while (i>=0 && V[i]==V[n-i-1])
		i--;
	return(i==-1);
}

int main(void){
	int V[] = {1,2,3,4,3,9,1};
	int n = sizeof(V)/sizeof(V[0]);
	printf("%d\n", Palindromo(V, n));
}

