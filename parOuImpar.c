#include <stdio.h>

char parOuImpar (int numero) {
if (numero % 2 == 0){
printf("Par");
}
else {
printf("Impar");
}
return parOuImpar;
}

int main(int argc, char const *argv[])
{
  int numero;
  
  printf("Informe um número: ");
  scanf("%d", &numero);

  printf("%s",parOuImpar(numero));

  return 0;
}

