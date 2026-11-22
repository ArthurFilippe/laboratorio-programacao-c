#include <stdio.h>

/* Exibe o menu de operacoes (sem parametros e sem retorno) */
void exibirMenu(void) {
    printf("\n===== CALCULADORA =====\n\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("0 - Sair\n\n");
}

/* Funcoes matematicas: recebem dois numeros e retornam o resultado */
float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    return a / b;
}

int main(void) {
    int opcao;
    float n1, n2;

    do {
        exibirMenu();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("\nPrograma encerrado.\n");
            break;
        }

        if (opcao < 0 || opcao > 4) {
            printf("\nOpcao invalida!\n");
            continue;
        }

        printf("\nPrimeiro numero: ");
        scanf("%f", &n1);
        printf("Segundo numero: ");
        scanf("%f", &n2);

        switch (opcao) {
            case 1:
                printf("\nResultado: %.2f\n", somar(n1, n2));
                break;
            case 2:
                printf("\nResultado: %.2f\n", subtrair(n1, n2));
                break;
            case 3:
                printf("\nResultado: %.2f\n", multiplicar(n1, n2));
                break;
            case 4:
                if (n2 == 0) {
                    printf("\nErro: nao e possivel dividir por zero.\n");
                } else {
                    printf("\nResultado: %.2f\n", dividir(n1, n2));
                }
                break;
        }
    } while (opcao != 0);

    return 0;
}
