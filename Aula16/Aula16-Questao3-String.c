/* Aula 16 - Questao 3 (fixacao): Ler uma palavra e apresentar somente seu primeiro caractere. */

#include <stdio.h>
int main(void) {
    char nome[50];

    printf("Escreva uma palavra: ");
    scanf("%49s", nome);

    printf("Palavra: %c", nome[0]);

    return 0;
}
