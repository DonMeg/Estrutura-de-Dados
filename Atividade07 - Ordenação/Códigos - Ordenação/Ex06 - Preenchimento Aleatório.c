#include <stdlib.h>
#include <stdio.h>

void preenche(int v[],int n,int s){
	srand(s);
	for(int i=0; i<n; i++) 
		v[i] = rand() % 1000;
}

void exibe(int v[], int n){
     int i;
     printf("O Vetor Aleatorio eh: \n");
     for(i = 0; i < n; i++){
             printf("%d ", v[i]);
     }
     printf("\n\n");
}


int main() {
    int n = 10;
    int v[n];
    int s = 1;

    preenche(v, n, s);
    exibe(v, n); 
    
    return 0;
}

