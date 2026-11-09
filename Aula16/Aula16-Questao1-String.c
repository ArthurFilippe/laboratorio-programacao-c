/* Aula 16 - Questao 1 (desafio): Contador de caracteres de uma palavra usando for, sem strlen. */

#include <stdio.h>

int main() {
    char palavra[100];
    int i, quantidade = 0;

    printf("Digite uma palavra: ");
    scanf("%99s", palavra);

    for (i = 0; palavra[i] != '\0'; i++) {
        quantidade++;
    }

    printf("Quantidade de letras: %d\n", quantidade);

    return 0;
}
