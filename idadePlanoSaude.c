#include <stdio.h>
#include <locale.h>

int main()
{
  int idade;

  setlocale(LC_ALL,"Portuguese");

  printf("Informe a idade do contemplado: \n");
  scanf("%d", &idade);

  if (idade <= 10 ) {
    printf("A mensalidade do plano é R$ 30,00.");
  } else if (idade > 10 && idade <= 29) {
    printf("A mensalidade do plano é R$ 60,00.");
  } else if (idade > 29 && idade <= 45 ) {
    printf("A mensalidade do plano é R$ 120,00.");
  } else if (idade > 45 && idade <= 59 ) {
    printf("A mensalidade do plano é R$ 150,00.");
  } else if (idade > 59 && idade <= 65 ) {
    printf("A mensalidade do plano é R$ 250,00.");
  } else {
    printf("A mensalidade do plano é R$ 400,00.");
  }

  return 0;
}
