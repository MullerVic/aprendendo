#include <locale.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  float nota;
  char conceito;

  printf("\nInforme a nota do aluno: \n");
  scanf("%f", &nota);

  switch ((int)nota)
  {
  case 1:
  conceito = 'D';
    break;

  case 2:
  conceito = 'D';
    break;

  case 3:
  conceito = 'D';
    break;

  case 4:
  conceito = 'D';
    break;

  case 5:
  conceito = 'C';
    break;

  case 6:
  conceito = 'C';
    break;

  case 7:
  conceito = 'B';
    break;

  case 8:
  conceito = 'B';
    break;

  case 9:
  conceito = 'A';
    break;

  default:
  conceito = 'A';
    break;
  }

  printf("\nConceito %c", conceito);


  return 0;
}
