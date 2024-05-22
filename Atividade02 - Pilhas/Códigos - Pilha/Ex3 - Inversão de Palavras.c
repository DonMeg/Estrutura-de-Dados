#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(void)
{  
  printf("Inversao de Palavras");
  
  int i = 0;
  char c[513];
  Pilha P = pilha(513);
  printf("\n\nQual eh a Frase: ");
  gets(c);
  
  printf("A sua Inversao eh: ");
  for(i = 0; c[i]; i++){
        if(c[i] != ' '){
              empilha(c[i], P);                
        }else{
              while(!vaziap(P)){
                        printf("%c", desempilha(P));            
              }
              printf(" ");
        }
  }
  
  while(!vaziap(P)){
        printf("%c", desempilha(P));            
  }
  printf("\n\n");
  
  destroip(&P);
  system("PAUSE");	
  return 0;
}

