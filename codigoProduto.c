#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
  int nProduto;

  printf("Informe o número do produto: \n");
  scanf("%d", &nProduto);

  switch (nProduto)
  {

  case 1:

    printf("\nO produto é um ALIMENTO NÃO-PERECÍVEL");

    break;

  case 2:

    printf("\nO produto é um ALIMENTO PERECÍVEL");

    break;

  case 3:

    printf("\nO produto é um ALIMENTO PERECÍVEL");

    break;

  case 4:

    printf("\nO produto é um ALIMENTO PERECÍVEL");

    break;

  case 5:

    printf("\nO produto é do VESTUÁRIO.");

    break;

  case 6:

    printf("\nO produto é do VESTUÁRIO.");

    break;

  case 7:

    printf("\nO produto é de HIGIENE PESSOAL.");

    break;

  case 8:

    printf("\nO produto é de LIMPEZA E UTENSÍLIOS DOMÉSTICOS.");

    break;

  case 9:

    printf("\nO produto é de LIMPEZA E UTENSÍLIOS DOMÉSTICOS.");

    break;

  case 10:

    printf("\nO produto é de LIMPEZA E UTENSÍLIOS DOMÉSTICOS.");

    break;

  case 11:

    printf("\nO produto é de LIMPEZA E UTENSÍLIOS DOMÉSTICOS.");

    break;

  case 12:

    printf("\nO produto é de LIMPEZA E UTENSÍLIOS DOMÉSTICOS.");

    break;

  case 13:

    printf("\nO produto é de LIMPEZA E UTENSÍLIOS DOMÉSTICOS.");

    break;

  case 14:

    printf("\nO produto é de LIMPEZA E UTENSÍLIOS DOMÉSTICOS.");

    break;

  case 15:

    printf("\nO produto é de LIMPEZA E UTENSÍLIOS DOMÉSTICOS.");

    break;

  default:

    printf("\nCódigo inválido.");

    break;
  }
  return 0;
}
