#include <stdio.h>

/* Calcula o fatorial de n usando for e retorna o resultado */
long calcularFatorial(int n) {
    long resultado = 1;
    int i;

    for (i = 2; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

int main(void) {
    int numero;

    printf("===== CALCULADORA DE FATORIAL =====\n\n");

    do {
        printf("Digite um numero (0 a 12): ");
        scanf("%d", &numero);
    } while (numero < 0 || numero > 12);

    printf("\nFatorial de %d = %ld\n", numero, calcularFatorial(numero));

    return 0;
}
