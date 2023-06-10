#include <stdio.h>
#include "funcao.h"

void crescente(int num) {
  int a;
  for (a = 0; a <= num; a++) {
    printf("%d ", a);
  }
}

void decrescente(int num) {
  int a;
  for (a = num; a >= 0; a--) {
    printf("%d ", a);
  }
}

int soma(int num) {
  int a, aux = 0;
  for(a = 0; a <= num; a++) {
    aux = aux + a;  
  }

  return aux;
}

float media(int num) {
  float a, aux = 0;
  for(a = 0; a <= num; a++) {
    aux = aux + a;
  }

  return aux / num;
}