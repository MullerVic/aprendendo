#include <locale.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>


int main(int argc, char const *argv[])
{
  int contador,totalRegular;
  char opiniao[20];
  float  mediaIdade = 0, idade[20],totalBom = 0, totalExcelente = 0;

  for (contador = 0; contador <=20; contador ++) {

    printf("\nPor favor, informe a sua idade:\n");
    scanf("%f", &idade[contador]);

    printf("\nPor favor, informe a sua opinião em relação ao filme: \t 1 - EXCELENTE \t 2 - BOM \t 3 - REGULAR\n");
    scanf("%d",&opiniao[contador]);


    if (opiniao[contador] == 1) {

      mediaIdade += idade[contador];

      totalExcelente ++;
      
    } else if (opiniao[contador] == 2 ){

      totalBom ++;
      printf("\n%.0f\n", totalBom);

     

    } else {

      totalRegular++;
      printf("\n%i\n", totalRegular);


    }

  }

    mediaIdade = mediaIdade/totalExcelente;
    totalBom = (totalBom*100)/3;


  if (mediaIdade>=1){

    printf("\nMedia de idades excelente %.1f.\nQuantidade de pessoas que votaram regular %i.\nPessoas que responderam bom %.1f %%.", mediaIdade,totalRegular,totalBom);

  } else {

    printf("\nNão houveram votantes EXCELENTE.\nQuantidade de pessoas que votaram regular %i.\nPessoas que responderam bom %.1f %%.", mediaIdade,totalRegular,totalBom);

  }
  return 0;
}
