#include <stdio.h>
#include "funcao.h"

int main(void) {

  int valor, escolha;

  do {
    printf("\nEscolha um numero positivo: ");
    scanf("%d", &valor);

    printf("\n------------------------------\n             MENU             "
           "\n------------------------------\n");
    printf("1 - Ordem crescente (de 0 a N)\n"
           "2 - Ordem decrescente (de N a 0)\n"
           "3 - Soma dos valores de 0 a N\n"
           "4 - Media dos valores de 0 a N\n"
           "5 - Finalizar\n"
           "\n");

    printf("Qual a opcao desejada? ");
    scanf("%d", &escolha);

    switch (escolha) {
    case 1:
      printf("\n");
      printf("Ordem crescente\n");
      crescente(valor);
      break;

    case 2:
      printf("\n");
      printf("Ordem decrescente\n");
      decrescente(valor);
      break;

    case 3:
      printf("\n");
      printf("Soma dos valores\n");
      printf("%d \n", soma(valor));
      break;

    case 4:
      printf("\n");
      printf("Media dos valores\n");
      printf("%.1f \n", media(valor));
      break;

    case 5:
      printf("\n");
      printf("Finalizando...\n");
      break;

    default:
      printf("Opcao invalida!\n");
      break;
    }
  } while (escolha != 5);

  return 0;
}