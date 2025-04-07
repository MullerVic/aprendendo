#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  int idade;

  setlocale(LC_ALL,"Portuguese");

  printf("Informe sua idade: \n");
  scanf("%d", &idade);

  if (idade < 18) {
    printf("Você é menor de idade.");
  } else if (idade >= 18 && idade < 65 ) {
    printf("Você é maior de idade.");
  } else {
    printf("Você é maior de 65 anos.");
  }
  return 0;
}
