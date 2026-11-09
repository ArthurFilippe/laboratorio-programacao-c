/* Aula 15 - Questao 4 (fixacao 3): Criar uma matriz 3x3 e contar quantos valores sao pares. */

#include <stdio.h>

int main()
{
    int par = 0;

    int numeros[3][3] = {
        {8, 5, 4},
        {10, 2, 7},
        {2, 6, 1}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (numeros[i][j] % 2 == 0)
                par++;
        }
    }

    printf("Quantidade de pares na matriz: %d\n", par);

    return 0;
}
