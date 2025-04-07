#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
int contador = 1, num;

do {

  if (contador %5 == 0){

    num = contador;
    printf("%d\n", num);
  }
    contador ++ ;
} while (contador <= 500);


  return 0;
}
