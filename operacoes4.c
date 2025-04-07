#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
  int num1, num2, resultado, operacao;

  printf("Informe dois números: \n");
  scanf("%d %d", &num1, &num2);

  printf("\nInforme qual operação deseja realizar: 1 - MÉDIA \t 2 - DIFERENÇA \t 3 - PRODUTO \t 4 - DIVISÃO\n");
  scanf("%d", &operacao);

  switch (operacao)
  {
  case 1:
    
    resultado = (num1+num2)/2;
  printf("\nO resultado é %d.", resultado);

    break;

  case 2:
    
    resultado = num1 - num2;
  printf("\nO resultado é %d.", resultado);
    
    break;

  case 3:
    
    resultado = num1 * num2;
  printf("\nO resultado é %d.", resultado);
    
    break;
  
  case 4:

    resultado = num1 / num2;
  printf("\nO resultado é %d.", resultado);

    break;
  
  default:

    printf("Opção inválida.");
  }

  return 0;
}
