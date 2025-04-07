#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
  
  int num1, num2;

  do {

    printf("Informe dois números, sendo o segundo maior que o primeiro: \n");
    scanf("%d %d", &num1, &num2);

  } while (num1 < num2 );

  printf("\n%d x %d = %d", num1, num2, num1 * num2);
   
  return 0;
}