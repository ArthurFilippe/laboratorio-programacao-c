/* Aula 14 - Questao 2: Ler quatro valores digitados pelo usuario, armazena-los em uma matriz 2x2 e exibir a matriz. */

#include <stdio.h>

int main()
{
    int matriz[2][2];
    int i, j;

    for (i = 0; i < 2; i++) {
        printf("Digite os numeros para a matriz %d\n", i + 1);
        for (j = 0; j < 2; j++) {
            printf("Numeros %d: ", j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
