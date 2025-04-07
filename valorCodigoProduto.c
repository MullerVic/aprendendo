#include <locale.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  char codigo;
  float totalDia = 0, totalL = 0, totalA = 0, totalH = 0, preco;

  do {
    printf("Informe o código do produto: L - Limpeza \t A - Alimentação \t H - Higiene");
    scanf("%c", &codigo);

    printf("Informe o valor do produto: ");
    scanf("%f", &preco);

    switch (codigo){
      case 'A':
      totalA+=preco;
      totalDia+=preco;
      break;

      case 'L':
      totalL += preco;
      totalDia += preco;
      break;

      case 'H':
      totalH += preco;
      totalDia += preco;
      break;

      default:
      break;
      }
  } while (preco != 0);
  return 0;
}
