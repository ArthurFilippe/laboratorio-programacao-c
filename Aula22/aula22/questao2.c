#include <stdio.h>

int main(void) {
    int valor = 20;
    int *ponteiro = &valor;

    printf("Valor da variavel: %d\n", valor);
    printf("Endereco da variavel: %p\n", (void *)&valor);
    printf("Valor acessado pelo ponteiro: %d\n", *ponteiro);

    return 0;
}
