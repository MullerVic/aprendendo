#include <stdio.h>

int main() {
    char nome[20][50];
    int idade[20];
    char sexo[20];
    
    printf("Digite o nome, idade e sexo de 20 pessoas:\n");
    
    for (int i = 0; i < 3; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", nome[i]);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo[i]);
    }
    
    printf("\nPessoas do sexo masculino com mais de 21 anos:\n");
    
    for (int i = 0; i < 3; i++) {
        if (sexo[i] == 'M' && idade[i] > 21) {
            printf("%s\n", nome[i]);
        }
    }
    
    return 0;
}

