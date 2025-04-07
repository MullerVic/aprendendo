#include <locale.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  int peso, idade, maisPesado = 0, maisVelho = 0, contador, pais;
  float pesoMedioTime, idadeMediaTime, pesoMedioGeral = 0, idadeMediaGeral = 0;

  setlocale(LC_ALL, "Portuguese");


    for (pais = 1; pais <=30; pais++){

    printf("\nInforme o peso e idade dos jogadores do %dº país:\n", pais);

    for (contador = 1; contador <=12; contador++) {

    printf("Informe o peso do %dº jogador:\n", contador);
    scanf("%d", &peso);

    printf("Informe a idade do %dº jogador:\n", contador);
    scanf("%d", &idade);

    pesoMedioTime += peso;

    idadeMediaTime += idade;

    if (maisPesado < peso){
      maisPesado = peso;
    }

    if (maisVelho < idade){
      maisVelho = idade;
    } 
    
    if (contador >= 12) {
        
    /*identifiquei quando era necessário criar outra condição para o cálculo da média da equipe*/
    pesoMedioTime/= 12;

    idadeMediaTime/= 12;

    /*e, finalmente, após esse cálculo, adicionar o valor a médias gerais*/
    idadeMediaGeral += idadeMediaTime;

    pesoMedioGeral += pesoMedioTime;
    
    printf("O atleta mais pesado tem %d Kg e o mais velho tem %d anos.\nA idade média dessa aquipe é %.1f anos e o peso médio é %.1f Kg.", maisPesado, maisVelho, idadeMediaTime, pesoMedioTime);
    
    /*aqui é necessário zerar a variável média equipe para ela não continuar sendo somada no final do loop*/
    idadeMediaTime = 0;
    
    pesoMedioTime = 0;
    
    }
    
    }

  }
    idadeMediaGeral/= 30;
    pesoMedioGeral/= 30;

  
  printf("\nO peso médio da competição é %.1f e a idade média é %.1f.",pesoMedioGeral, idadeMediaGeral);


  return 0;
}