#include <locale.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  int idade, menos21 = 0, mais50 = 0;

  do {

    printf("Informe a idade de uma pessoa (digite ZERO para encerrar):\n");
    scanf("%d", &idade);

    if (idade < 21) {

      menos21 ++;
    } else if (idade > 50) {

      mais50 ++;
    }
 }  while (idade != 0);

  printf("\nPessoas com menos de 21 : %d\nPessoas com mais de 50: %d", menos21, mais50);

  return 0;
}
