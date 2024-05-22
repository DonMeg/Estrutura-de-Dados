/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

    float media(float v[], int n) {
    float s = 0;
    for(int i=0; i<n; i++)
    s += v[i];
    return s/n;
}

int main(void) {
    int n;
    printf("Quantidade de numeros? ");
    scanf("%d",&n);
    float *v = malloc(n*sizeof(float));
    for(int i=0; i<n; i++) {
        printf("%do numero? ",i+1);
        scanf("%f",&v[i]);
    }
    printf("Media = %.2f\n",media(v,n));
    return 0;
}