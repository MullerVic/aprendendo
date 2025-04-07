#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(int argc, char const *argv[])
{
  int contador = 0, primeiro = 1, segundo = 1, terceiro;

    

  do {

    if (contador <= 1) {

      terceiro = 1;
    }

    else {


    terceiro = primeiro + segundo;

    primeiro = segundo;

    segundo = terceiro;

    }

    printf("\n%d\n", terceiro);

    contador++;


  } while (contador < 20 );
  return 0;
}
