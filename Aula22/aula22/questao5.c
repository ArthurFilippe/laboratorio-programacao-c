#include <stdio.h>

#define TAM 5

int main(void) {
    int numeros[TAM];
    int *p = numeros;
    int i;

    for (i = 0; i < TAM; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nElementos do vetor (acessados pelo ponteiro):\n");
    for (i = 0; i < TAM; i++) {
        printf("Posicao %d: %d\n", i, *(p + i));
    }

    return 0;
}
