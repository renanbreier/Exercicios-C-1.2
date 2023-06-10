#include "funcoes.h"
#include <stdio.h>

#define LIN 10
#define COL 10
#define limite 501

int main(void) {

  int matriz[LIN][COL], opcao;

  preencheMatrizAleatorios(matriz, LIN, COL, limite);

  apresentaMatriz(matriz, LIN, COL);

  printf("\nEscolha uma opcao:\n1 - Menor valor da matriz\n2 - Maior valor da matriz\n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      printf("O menor valor gerado na matriz é: %d", menorMatriz(matriz, LIN, COL));
      break;

    case 2:
      printf("O maior valor gerado na matriz é: %d", maiorMatriz(matriz, LIN, COL));
      break;
  }

  return 0;
}