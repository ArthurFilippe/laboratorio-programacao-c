/* Aula 15 - Questao 2 (fixacao 1): Somar todos os elementos de uma matriz 2x3. */

#include <stdio.h>

int soma = 0;
int main(void) {
    int matriz[2][3] = {
        {10, 6, 8},
        {3, 2, 1}
    };

    for (int i = 0; i < 2; i++) {
        int totalProduto = 0;
        for (int j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
    }

    printf("A soma é: %d\n", soma);
    return 0;
}
