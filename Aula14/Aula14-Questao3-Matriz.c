/* Aula 14 - Questao 3: Criar uma matriz 3x3, somar todos os seus elementos e apresentar o resultado. */

#include <stdio.h>

int soma = 0;
int main()
{
    int matriz[3][3] = {
        {10, 6, 8},
        {3, 6, 7},
        {9, 4, 2}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
    }

    printf("A soma é: %d\n", soma);

    return 0;
}
