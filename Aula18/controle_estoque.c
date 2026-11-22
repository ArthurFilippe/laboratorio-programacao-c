#include <stdio.h>

/* Recebe a quantidade e retorna o dobro */
int dobro(int quantidade) {
    return quantidade * 2;
}

int main(void) {
    int quantidadeInicial, quantidadeFinal;

    printf("===== CONTROLE DE ESTOQUE =====\n\n");

    printf("Quantidade inicial: ");
    scanf("%d", &quantidadeInicial);

    quantidadeFinal = dobro(quantidadeInicial);

    printf("\nQuantidade apos duplicacao: %d\n", quantidadeFinal);

    return 0;
}
