#include <stdio.h>

int sd (int n){
    if (n <= 0) 
        return 0;
    else{
        return (n%10) + sd(n/10);
    }
}

int main(void){
    int n = 0;

    printf("Determinar a Soma de Digitos\n\n");
    
    printf("Insira um Numero: ");
    scanf("%d", &n);
    
    if(n < 0) n = -n;
    
    printf("A Soma dos Digitos de %d eh: %d\n", n, sd(n));
    system("PAUSE");
}
