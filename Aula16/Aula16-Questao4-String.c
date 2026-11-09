/* Aula 16 - Questao 4 (fixacao): Ler uma palavra e exibir cada caractere em uma linha. */

#include <stdio.h>

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%99s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        printf("%c\n", palavra[i]);
    }

    return 0;
}
