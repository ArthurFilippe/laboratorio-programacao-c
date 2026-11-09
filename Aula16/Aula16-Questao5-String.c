/* Aula 16 - Questao 5 (fixacao): Ler uma palavra e contar quantas vogais ela possui. */

#include <stdio.h>
#include <ctype.h>

int main() {
    char palavra[100];
    int vogais = 0;

    printf("Digite uma palavra: ");
    scanf("%99s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {

        char c = tolower(palavra[i]);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vogais++;
        }
    }

    printf("A palavra possui %d vogais.\n", vogais);

    return 0;
}
