#include <stdio.h>
#include <locale.h>
#include <math.h>


int main(int argc, char const *argv[])
{
 float precoProduto = 0, lucro1 = 0, lucro2 = 0;

 printf("Informe o valor do produto: \n");
 scanf("%f", &precoProduto);

 if (precoProduto >= 20 ) {
  lucro1 = precoProduto * 0.3;
  printf("O produto de valor R$ %.2f, deverá ser vendido por R$ %.2f.",precoProduto, precoProduto+lucro1);
 } else {
  lucro2 = precoProduto * 0.45;
  printf("O produto de valor R$ %.2f, deverá ser vendido por R$ %.2f.",precoProduto, precoProduto+lucro2);
 }
 
 
  return 0;
}
