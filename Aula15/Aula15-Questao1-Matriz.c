/* Aula 15 - Questao 1 (exercicio para entrega): Reserva de assentos no cinema (matriz 3x4; 0 = disponivel, 1 = ocupado). */

#include <stdio.h>

int main(void) {

    int Livre = 0;
    int Ocupado = 0;

    int vendas[3][4] = {
        {0, 1, 0, 0},
        {1, 1, 0, 1},
        {0, 0, 1, 0}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (vendas[i][j] == 1) {
                Ocupado++;
            }
            else if (vendas[i][j] == 0) {
                Livre++;
            }
        }
    }
    printf("Quantidade de assentos Livres: %d\n", Livre);
    printf("Quantidade de assentos Ocupados: %d\n", Ocupado);

    return 0;
}
