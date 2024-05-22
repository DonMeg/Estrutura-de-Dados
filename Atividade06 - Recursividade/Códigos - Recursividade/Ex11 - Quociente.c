#include <stdio.h>

int quoc (int m, int n){
    if (m < n) 
        return 0;
    else{
        return 1 + quoc(m - n, n);
    }
}

int main(void){
    int m = 0;
    int n = 0;

    printf("Determinar o Quociente\n");
    
    printf("Insira o Dividendo: ");
    scanf("%d", &m);
    
    printf("Insira o Divisor: ");
    scanf("%d", &n);
    
    if(m < 0) m = -m;
    if(n < 0) n = -n;
    
    if (n == 0){
         printf ("Impossivel Dividir com 0");
    }else{
        printf("O Quociente eh: %d", quoc(m,n));
    }
}