/* Aula 16 - Questao 2 (fixacao): Ler e exibir o nome completo de uma pessoa. */

#include <stdio.h>
int main(void) {
    char nome[50];

    printf("Escreva seu nome completo: ");

    fgets(nome, sizeof(nome), stdin);

    printf("Nome completo: %s", nome);

    return 0;
}
