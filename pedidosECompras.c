#include <locale.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  int nPedido = 1, dia, mes, ano, qntd;
  float preco = 0, totalCompra = 0, totalPedido = 0;

  do {

    printf("\nEsse é o %dº pedido ", nPedido);

    printf("\nInforme o DIA, MÊS e ANO do pedido: ");
    scanf("%d %d %d", &dia, &mes, &ano);

    printf("\nInforme o preço do produto: ");
    scanf("%f", &preco);

    printf("\nInforme a quantidade de itens: ");
    scanf("%d", &qntd);

    totalPedido = preco*qntd;

    printf("\nTotal pedido: R$ %.2f", totalPedido);

    totalCompra += totalPedido;
    
    printf("\nInforme o nº do pedido (digite ZERO para concluir): ");
    scanf("%d", &nPedido);

  } while (nPedido != 0);

  printf("\nTotal compra: R$ %.2f", totalCompra);

  return 0;
}
