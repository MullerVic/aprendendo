#include <locale.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  int  kwh, codCliente = -1, totalClientes1e2 = 0;
  float totalConta = 0, media1e2 = 0, totalConsumo1 = 0, totalConsumo2 = 0, totalConsumo3 = 0;

  while (codCliente!= 0){

    printf("\nInforme o número tipo de consumidor:\n 1 - RESIDENCIAL \t 2 - COMERCIAL \t 3 - INDUSTRIAL \t 0 - ENCERRAR\n");
    scanf("%d", &codCliente);
      
    if ((codCliente == 1) || (codCliente == 2)){

      totalClientes1e2 ++;

    } 
    
    if((codCliente == 1) || (codCliente == 2) || (codCliente == 3)) {

    printf("\nInforme o consumo mensal em kWh:\n");
    scanf("%d", &kwh);

    switch (codCliente)
    {
    case 1:
    /*a ordem em que a variável kwh é utilizada aqui, afeta a execução do código*/
    /*eu tinha testado, primeiramente, modificar a totalConta antes e nao estava conseguindo...
    adicionar kwh á media1e2 por causa disso*/
      media1e2+=kwh;

      totalConta = kwh * 0.3;

      printf("\nTotal conta: %.1f\n", totalConta);


      totalConsumo1 += totalConta;

      break;

    case 2:
    /*o mesmo caso aconteceu aqui*/
      media1e2 += kwh;

      totalConta = kwh * 0.5;

      printf("\nTotal conta: %.1f\n", totalConta);


      totalConsumo2 += totalConta;

      break;
    
    case 3:

      totalConta = kwh * 0.7;
      
      totalConsumo3 += totalConta;

      printf("\nTotal conta: %.1f\n", totalConta);

      break;
    
    default:

    break;

    }

   
   }

  } 

  media1e2 = media1e2/totalClientes1e2;

  printf("\n Total consumo 1 \t Total consumo 2 \t Total consumo 3\n %.2f \t\t\t %.2f \t\t\t %.2f", totalConsumo1, totalConsumo2, totalConsumo3);

  printf("\nMedia consumo 1 e 2 %.2f", media1e2);

  return 0;
}
