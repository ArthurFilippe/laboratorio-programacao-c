/* Aula 15 - Questao 3 (fixacao 2): Armazenar as notas de tres alunos em duas provas e calcular a media de cada aluno. */

#include <stdio.h>

int main()
{
    float notas[3][2];
    float medias[3];
    int i, j;

    for (i = 0; i < 3; i++) {
        printf("Digite as notas dos alunos %d\n", i + 1);
        for (j = 0; j < 2; j++) {
            printf("Prova %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        medias[i] = (notas[i][0] + notas[i][1]) / 2.0;
    }

    for (i = 0; i < 3; i++) {
        printf("Aluno %d: Prova 1 = %.2f | Prova 2 = %.2f | Media = %.2f\n",
               i + 1, notas[i][0], notas[i][1], medias[i]);
    }

    return 0;
}
