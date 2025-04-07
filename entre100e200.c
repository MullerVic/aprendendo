#include <locale.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  int num1 = 1, i,num2;

  do {

    printf("\nDigite um número:\n");
    scanf("%d", &num1);

    if ((num1 >=100) && (num1 <=200)){

      num2++;
    }

    
  } while (num1!=0);

  printf("Foram digitados %d números entre 100 e 200.", num2);

  return 0;
}
