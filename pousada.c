#include <locale.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

  float contaCliente = 0, faturamento = 0;
  char nome[20];
  int dias, nConta = -1;

  do {
      /*o GETS não serve para reestabelecer o string em uma var char+*/
    printf("Cliente: ");
    scanf("%s", &nome);

    printf("\nDias hospedado: ");
    scanf("%d", &dias);

    if (dias < 10) {
      
      contaCliente = 30 + (dias * 15);
      printf("\nTotal da conta: R$ %.2f", contaCliente);
      faturamento += contaCliente;

    } else {

      contaCliente = 30 + (dias * 8);
      printf("\nTotal da conta: R$ %.2f", contaCliente);
      faturamento += contaCliente;

    }

    printf("\nNº da conta: ");
    scanf("%d", &nConta);

  } while (nConta != 0);

  printf("Faturamento do dia: R$ %.2f", faturamento);

  return 0;
}
