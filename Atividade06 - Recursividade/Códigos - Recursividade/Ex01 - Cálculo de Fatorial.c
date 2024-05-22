/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int fat(int n){
    if (n == 0) return 1;
    return n*fat(n-1);
}


int main()
{
    int n;
    printf("Insira o numero para o Fatorial: ");
    scanf("%d", &n);
    printf("\nFatorial = %d", fat(n));
    return 0;
}

