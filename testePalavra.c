#include <stdio.h>
#include <string.h>


int verificarPalavra(const char *frase, const char *palavra) {

    if (strstr(frase, palavra) != NULL) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    const char *frase = "olá joão";
    const char *palavra = "olá";


    if (verificarPalavra(frase, palavra)) {
        printf("A palavra '%s' está contida na frase.\n", palavra);
    } else {
        printf("A palavra '%s' NÃO está contida na frase.\n", palavra);
    }

    return 0;
}
