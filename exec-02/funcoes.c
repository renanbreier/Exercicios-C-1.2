#include "funcoes.h"
#include <stdio.h>

void recebeChars(char vet[], int tam) {
  int i;

  for (i = 0; i < 7; i++) {
    printf("\nDigite uma letra: ");
    scanf(" %c", &vet[i]);
  }
}

void ordenaVetorChars(char vet[], int tam) {
  char aux;
  int i, j;

  for (i = 0; i < tam - 1; i++) {
    for (j = i + 1; j < tam; j++) {
      if (vet[j] < vet[i]) {
        aux = vet[j];
        vet[j] = vet[i];
        vet[i] = aux;
      }
    }
  }
}

void apresentaVetorChars(char vet[], int tam) {
  int i;

  ordenaVetorChars(vet, tam);

  printf("\nEm ordem alfabetica: ");
  for (i = 0; i < tam; i++) {
    printf("\n%d -\t%c", i + 1, vet[i]);
  }
}