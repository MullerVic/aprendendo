#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
  float nota1, nota2, media = 0;
  char nome[10];

  setlocale(LC_ALL,"Portuguese");

  printf("Informe o nome do aluno (a): \n");
  scanf("%s", &nome);

  printf("\nInforme as notas: \n");
  scanf("%f %f", &nota1, &nota2);
  
  media = (nota1+nota2)/2;

  if (media >= 7) {
    printf("O aluno(a) %s, obteve a nota %.1f na primeira prova, %.1f na segunda prova, sua média foi %.1f e ele se encontra APROVADO.",nome, nota1, nota2, media);
  } else if (media < 7 && media >= 3) {
    printf("O aluno(a) %s, obteve a nota %.1f na primeira prova, %.1f na segunda prova, sua média foi %.1f e ele se encontra em PROVA FINAL.",nome, nota1, nota2, media);
  } else {
    printf("O aluno(a) %s, obteve a nota %.1f na primeira prova, %.1f na segunda prova, sua média foi %.1f e ele se encontra REPROVADO.",nome, nota1, nota2, media);
  }
  return 0;
}
