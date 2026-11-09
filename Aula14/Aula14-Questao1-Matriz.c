/* Aula 14 - Questao 1: Criar uma matriz 2x2 com valores definidos no codigo e exibi-la. */

#include <stdio.h>

int main(void) {

    int numeros[2][2] = {
        {54, 34},
        {30, 48}
    };

    printf("%d\n", numeros[0][0]);

    printf("%d\n", numeros[1][1]);
    return 0;
}
