#include <locale.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  int fat, n;

  do {

    printf("Informe um número (digite um nº < 1 para encerrar):\n");
    scanf("%d", &n) ;

    for(fat = 1; n > 1; n = n - 1){

      fat = fat * n;

  }

    printf("\n%d\n", fat);


  } while (n != 0);

  return 0;
}
