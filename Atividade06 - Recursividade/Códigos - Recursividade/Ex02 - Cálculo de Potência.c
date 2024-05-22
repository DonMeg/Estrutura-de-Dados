/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

float pot (float x, int n){
    if (n == 0) return 1;
    return x * pot(x, n - 1);
}

int main(void){
    float x;
    int n;
    
    printf("Calculo de Potencia\n");
    
    printf("Qual a Base: ");
    scanf("%f", &x);
    
    printf("Qual o Expoente: ");
    scanf("%i", &n);
    
    printf("Potencia: %1.f", pot(x,n));
}