#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
int contador= 100, num;

do {

  if (contador %2 == 0){

    num = contador;
    printf("%d\n", num);
  }
    contador -- ;
} while (contador !=1);


  return 0;
}
