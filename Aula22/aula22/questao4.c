#include <stdio.h>

/* Recebe o endereco de um inteiro e altera seu valor para o dobro */
void dobrar(int *numero) {
    *numero = *numero * 2;
}

int main(void) {
    int valor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);

    dobrar(&valor);

    printf("Valor dobrado: %d\n", valor);

    return 0;
}
