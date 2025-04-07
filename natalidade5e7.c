#include <locale.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  int anos, i, popA = 5000000, popB = 7000000;

  do {

    popA = popA+(popA*0.03);

    i++;

    popB = popB+(popB*0.02);


  } while (popA<popB);

  printf("Levará %d anos para o país A ultrapassar a população do país B.", i);

  return 0;
}
