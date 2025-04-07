#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(int argc, char const *argv[])
{
  char nomeLivro [150];
  int usuario;

  printf("Informe o nome do livro a ser alugado: \n");
  gets(nomeLivro);

  printf("Informe o tipo de usuário:\n1 - PROFESSOR \t 2 - ALUNO\n");
  scanf("%d", &usuario);

  switch (usuario)
  {
  case 1:
    printf("Você pode alugar o livro %s por 10 dias.", nomeLivro);
    break;
  
  default:
    printf("Você é aluno e pode alugar o livro %s por 3 dias.", nomeLivro);
    break;
  }
  

  return 0;
}
