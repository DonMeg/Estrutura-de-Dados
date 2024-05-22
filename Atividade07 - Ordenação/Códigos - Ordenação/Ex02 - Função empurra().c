#include <stdio.h>

void troca(int v[], int i, int j){
     int x = v[i];
     v[i] = v[j];
     v[j] = x;
}

void empurra(int v[], int u){
     int i;
     for(i = 0; i < u; i++){
           if (v[i] > v[i+1]){
              troca(v, i, i+1);
           }
           
     }
}

void exibe(int v[], int n){
     int i;
     printf("O Vetor em Ordem Crescente eh: \n");
     for(i = 0; i < n; i++){
             printf("%d ", v[i]);
     }
     printf("\n\n");
}
int main(void){
    int v[9] = {51, 82, 38, 99, 75, 19, 69, 46, 27};
    empurra(v,8);
    exibe(v,9);

    return 0;
}

