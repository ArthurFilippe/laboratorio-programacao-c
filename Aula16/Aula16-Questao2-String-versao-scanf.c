/* Aula 16 - Questao 2 (fixacao): primeira tentativa com scanf (le apenas o primeiro nome). */

#include <stdio.h>

int main() {
    char nome[50];

    printf("Digite seu nome: ");
    scanf("%49s", nome);

    printf("Nome completo: %s\n", nome);

    return 0;
}
