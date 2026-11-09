/* Aula 15 - Questao 5 (fixacao 4): Criar uma matriz 3x3 e identificar o maior valor armazenado. */

#include <stdio.h>

int main()
{
    int numeros[3][3] = {
        {8, 5, 4},
        {10, 2, 7},
        {2, 6, 1}
    };

    int maior = numeros[0][0];
    int linha_maior = 0;
    int coluna_maior = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (numeros[i][j] > maior) {
                maior = numeros[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }

    printf("O maior valor é %d\n", maior);
    printf("Localização: linha %d, coluna %d\n", linha_maior, coluna_maior);

    return 0;
}
