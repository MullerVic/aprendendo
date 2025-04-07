#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
  int prato, sobremesa, bebida, refeicao;

  printf("Informe o prato principal:\n1 - VEGETARIANO \t 2 - PEIXE \t 3 - FRANGO \t 4 - CARNE\n");
  scanf("%d", &prato);

  switch (prato)
  {
  case 1:

    refeicao = 180;

    break;

  case 2:

    refeicao = 230;

    break;

  case 3:

    refeicao = 250;

    break;
  
  default:

    refeicao = 350;

    break;
  }


  printf("Informe a sobremesa:\n1 - ABACAXI \t 2 - SORVETE DIET \t 3 - MOUSSE DIET \t 4 - MOUSSE CHOCOLATE\n");
  scanf("%d", &sobremesa);

  switch (sobremesa)
  {
  case 1:

    refeicao = refeicao + 75;

    break;

  case 2:

    refeicao = refeicao + 110;

    break;

  case 3:

    refeicao = refeicao + 170;

    break;
  
  default:

    refeicao = refeicao +200;

    break;

  }  

  
  printf("Informe a bebida:\n1 - CHÁ \t 2 - SUCO DE LARANJA \t 3 - SUCO DE MELÃO \t 4 - REFRIGERANTE DIET\n");
  scanf("%d", &bebida);

  switch (bebida)
  {

  case 1:

    refeicao = refeicao + 20;

    break;

  case 2:

    refeicao =refeicao + 70;

    break;

  case 3:

    refeicao =refeicao +  100;

    break;
  
  default:

    refeicao = refeicao + 65;

    break;
  }

  printf("O total de calorias é %d.", refeicao);

  return 0;
}
