#include <stdio.h>
#include <locale.h>

int main()
{
  int idade;

  setlocale(LC_ALL,"Portuguese");

  printf("Informe a idade do nadador: \n");
  scanf("%d", &idade);

  if (idade < 5 ) {
    printf("Por favor, os nadadores precisam ter acima de 5 anos.");
  } else if (idade <= 7 && idade >= 5) {
    printf("O nadador é da categoria INFANTIL A.");
  } else if (idade >= 8 && idade <= 10 ) {
    printf("O nadador é da categoria INFANTIL B.");
  } else if (idade >= 11 && idade <= 13 ) {
    printf("O nadador é da categoria JUVENIL A.");
  } else if (idade >= 14 && idade <= 17 ) {
    printf("O nadador é da categoria JUVENIL B.");
  } else {
    printf("O nadador é da categoria SENIOR.");
  }

  return 0;
}
