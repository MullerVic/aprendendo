#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
  float saldo, credito;

  printf("Informe o saldo médio:\n");
  scanf("%f", &saldo);

  if ((saldo > 0) && (saldo <=500)){

    printf("Você não possui direito a crédito.");

  } else if ((saldo >= 501) && (saldo <= 1000)){

    credito = (saldo * 0.3);
    printf("O seu crédito é de R$ %.2f.", credito);

  } else if ((saldo >= 1001) && (saldo <= 3000)){

    credito = (saldo * 0.4);
    printf("O seu crédito é de R$ %.2f.", credito);

  } else {

    credito = (saldo * 0.5);
    printf("O seu crédito é de R$ %.2f.", credito);
  }

  printf("\nO seu saldo médio é de R$ %.2f.", saldo);
  
  return 0;
}
