#include "funcoes.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COL 10

void preencheMatrizAleatorios(int matriz[][COL], int lin, int col, int limite) {
  int i, j;

  srand(time(NULL));
  for (i = 0; i < lin; i++) {
    for (j = 0; j < col; j++) {
      matriz[i][j] = rand() % limite;
      ;
    }
  }
}

void apresentaMatriz(int matriz[][COL], int lin, int col) {
  int i, j;

  for (i = 0; i < lin; i++) {
    for (j = 0; j < col; j++) {
      printf("\t%d\t|", matriz[i][j]);
    }
    printf("\n");
  }
}

int menorMatriz(int matriz[][COL], int lin, int col) {
  int menor = matriz[0][0], i, j;

  for (i = 0; i < lin; i++) {
    for (j = 0; j < col; j++) {
      if (matriz[i][j] < menor) {
        menor = matriz[i][j];
      }
    }
  }

  return menor;
}

int maiorMatriz(int matriz[][COL], int lin, int col) {
  int maior = matriz[0][0], i, j;

  for (i = 0; i < lin; i++) {
    for (j = 0; j < col; j++) {
      if (matriz[i][j] > maior) {
        maior = matriz[i][j];
      }
    }
  }

  return maior;
}