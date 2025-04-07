#include <stdio.h>
#include <locale.h>


int main(int argc, char const *argv[])
{
  setlocale(LC_ALL, "Porguguese");

  float ponto1, ponto2, ponto3, media = 0, soma = 0;

//  float media = 0;

  printf("Informe as notas dos três arqueiros (separadas por um ESPAÇO): \n");
  scanf("%f %f %f", &ponto1, &ponto2, &ponto3);

  while ((ponto1 == ponto2) || (ponto2 == ponto3) || (ponto1 == ponto3)) {
    printf("\nPor favor, escreva três notas diferentes: \n");
    scanf("%f %f %f", &ponto1, &ponto2, &ponto3);
  }

  soma = ponto1 + ponto2 + ponto3;


  if (soma > 100) {
    if ((ponto1 > ponto2) && (ponto2 > ponto3) && (ponto1>ponto3)) {

      media = soma/3;
      printf("A equipe obteve %.0f, %.0f, e %.0f. Sua média foi %.1f.",ponto1, ponto2, ponto3, media); 

    } else if ((ponto2 > ponto1) && (ponto2>ponto3) && (ponto1 > ponto3)) {
      media = soma/3;
      printf("A equipe obteve %.0f, %.0f, e %.0f. Sua média foi %.1f.",ponto2, ponto1, ponto3, media); 

    } else if ((ponto3 > ponto2) && (ponto3>ponto1)&& (ponto2>ponto1)){

      media = soma/3;
      printf("A equipe obteve %.0f, %.0f, e %.0f. Sua média foi %.1f.",ponto3, ponto2, ponto1, media); 

    } else if ((ponto2 > ponto1) && (ponto2>ponto3) && (ponto3>ponto1)){

      media = soma/3;
      printf("A equipe obteve %.0f, %.0f, e %.0f. Sua média foi %.1f.",ponto2, ponto3, ponto1, media); 

    } else if ((ponto3 > ponto1) && (ponto3 > ponto2) && (ponto1 > ponto2)){

     media = soma/3;
     printf("A equipe obteve %.0f, %.0f, e %.0f. Sua média foi %.1f.",ponto3, ponto1, ponto2, media); 

    } else {

      media = soma/3;
      printf("A equipe obteve %.0f, %.0f, e %.0f. Sua média foi %.1f.",ponto1, ponto3, ponto2, media);

    }
    
    }
    
    else {
      printf("Equipe desclassificada.");
    
  }
  return 0;
}
