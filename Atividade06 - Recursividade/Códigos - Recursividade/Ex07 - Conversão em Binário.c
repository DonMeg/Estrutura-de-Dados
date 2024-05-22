/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void binario (int n){
    if (n < 2 ) printf ("%d", n);
    else{
        binario(n/2);
        printf("%d", n%2);
    }
}

int main(void){
    int n;
    
    printf("Conversao em Binario\n");
    
    printf("Insira o Numero Decimal: ");
    scanf("%d", &n);
    printf("O binario de %d eh: ", n);
    binario(n);
    
    return 0;
}

