/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

float h (int n){
    if (n == 1) return 1;
    return h(n -1) + 1.0/n;
}

int main(void){
    int n;
    
    printf("Soma dos N Termos da Serie Harmonica\n");
    
    printf("Insira o Numero: ");
    scanf("%i", &n);
    
    printf("Harmonica: %.2f", h(n));
}