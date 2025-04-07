#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
  int finalPlaca;

  printf("Informe o digito final da placa: \n");
  scanf("%d", &finalPlaca);

  switch (finalPlaca)
  {

  case 0:

    printf("\nO final de placa é %d e a renovação é realizada em Fevereiro.", finalPlaca);
    break;
  
  case 1:

    printf("\nO final de placa é %d e a renovação é realizada em Março.", finalPlaca);
    break;

  case 2:

    printf("\nO final de placa é %d e a renovação é realizada em Abril.", finalPlaca);
    break;

  case 3:

    printf("\nO final de placa é %d e a renovação é realizada em Maio.", finalPlaca);
    break;

  case 4:

    printf("\nO final de placa é %d e a renovação é realizada em Junho.", finalPlaca);
    break;

  case 5:

    printf("\nO final de placa é %d e a renovação é realizada em Julho.", finalPlaca);
    break;

  case 6:

    printf("\nO final de placa é %d e a renovação é realizada em Agosto.", finalPlaca);
    break;

  case 7:

    printf("\nO final de placa é %d e a renovação é realizada em Setembro.", finalPlaca);
    break;

  case 8:

    printf("\nO final de placa é %d e a renovação é realizada em Outubro.", finalPlaca);
    break;

  default:

     printf("\nO final de placa é %d e a renovação é realizada em Novembro.", finalPlaca);

    break;
  }
  return 0;
}
