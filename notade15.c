#include <locale.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
  int contador;
  float nota1[14], nota2[14], mediaAluno[14], mediaTurma;
  char nome[10];

  for (contador = 0; contador < 15; contador++)
  {

    printf("\nInforme o nome do aluno:\n");
    scanf("%s", nome);

    printf("\nInforme as notas do aluno:\n");
    scanf("%f %f", &nota1[contador], &nota2[contador]);

    mediaAluno[contador] = (nota1[contador] + nota2[contador]) / 2;

    mediaTurma += mediaAluno[contador];

    if (contador < 13)
    {


      printf("\nAs notas do aluno(a) %s foram : %.1f P1, %.1f P2 e a média é %.1f.\n", nome, nota1[contador], nota2[contador], mediaAluno[contador]);
    }
    else
    {
      mediaTurma/=15;

      printf("\nAs notas do aluno(a) %s foram : %.1f P1, %.1f P2 e a média é %.1f.\n", nome, nota1[contador], nota2[contador], mediaAluno[contador]);
      printf("\nA média da turma é %.1f.\n", mediaTurma);

    }
  }

  return 0;
}
