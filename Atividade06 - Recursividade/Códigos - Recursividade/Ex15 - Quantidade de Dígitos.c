#include <stdio.h>

int qd (int n){
    if (n < 2){  
        return 1;
    }else{
        return 1 + qd(n/2);
    }
}

int main(void){
    int n = 0;

    printf("Determinar a Quantidade de Digitos\n\n");
    
    printf("Insira um Numero: ");
    scanf("%d", &n);
    
    if(n < 0) n = -n;
    
    printf("A Quantidade de Digitos de %d em Binario eh: %d\n", n, qd(n));
    system("PAUSE");
}

