#include <stdio.h>

int main(void) {
    int numero = 15;
    int *p = &numero;

    printf("Valor antes: %d\n", numero);

    *p = 50;

    printf("Valor depois: %d\n", numero);

    return 0;
}
