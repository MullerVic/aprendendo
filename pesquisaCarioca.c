#include <locale.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  int time = -1, cidade, totalFlu, totalBot, totalVas, totalFla, totalOut, niteroiFlu, rjOut;
  float salario, mediaSalario;

  while (time!= 0) {

    printf("Onde você mora?\n 1 - RJ \t 2 - NITERÓI \t 3 - OUTROS\n");
    scanf("%d", &cidade);

    printf("Qual o seu salário?\n");
    scanf("%f", &salario);

    printf("Qual seu time do coração (digite ZERO para encerrar)?\n1 - FLUMINENSE; \t 2 - BOTAFOGO; \t 3 - VASCO; \t 4 - FLAMENGO; \t 5 - OUTROS\n");
    scanf("%d", &time);

    switch(time)
    {
      case 1: 
      totalFlu++;
      break;

      case 2:
      totalBot++;
      mediaSalario+=salario;
      break;

      case 3: 
      totalVas++;
      break;

      case 4:
      totalFla++;
      break;

      default:
      totalOut++;
      break;
    }

    if ((time ==5) && (cidade == 1)) {
      rjOut++;
    } else if ((time == 1) && (cidade == 2)) {
      niteroiFlu++;
    }

  }
  
  mediaSalario/=totalBot;
  printf("\nTotais de torcedores\nFluminense: %d\n Botafogo: %d\n Vasco: %d\n Flamengo: %d\n Outros: %d", totalFlu, totalBot, totalVas, totalFla, totalOut);

  printf("\nMédia de salário dos torcedores do Botafogo%.2f", mediaSalario);

  printf("\n Moradores do RJ torcedores de outras equipes: %d\n Moradores de Niterói torcedores do Fluminense: %d", rjOut, niteroiFlu);
 

  
  return 0;
}
