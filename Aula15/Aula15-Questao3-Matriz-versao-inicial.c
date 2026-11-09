/* Aula 15 - Questao 3 (fixacao 2): primeira tentativa (notas fixas no codigo). */

#include <stdio.h>

/* Obs.: no código original (foto) esta atividade estava incompleta
   (laços vazios e uma linha "int" solta). Aqui ela foi completada:
   calcula a média das duas notas de cada aluno. */

int main(void) {

    float media = 0;

    int notas[3][2] = {
        {10, 8},
        {4, 7},
        {3, 4}
    };

    for (int i = 0; i < 3; i++) {
        float soma = 0;
        for (int j = 0; j < 2; j++) {
            soma += notas[i][j];
        }
        media = soma / 2;
        printf("Aluno %d: Media = %.2f\n", i + 1, media);
    }

    return 0;
}
