#include "funcoes.h"
#include <stdio.h>

#define TAM 7

int main(void) {

  char letras[TAM];

  recebeChars(letras, TAM);

  apresentaVetorChars(letras, TAM);

  return 0;
}