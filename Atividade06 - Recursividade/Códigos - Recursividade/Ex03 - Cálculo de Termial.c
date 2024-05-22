/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int termial (int n){
    if (n == 0) return 0;
    return termial(n - 1) + n;
}

int main(void){
    int n;
    
    printf("Calculo de Temial\n");
    
    printf("Insira o Numero para o Calculo: ");
    scanf("%d", &n);
    
    printf("Temial = %d\n", termial(n));
    return 0;
}