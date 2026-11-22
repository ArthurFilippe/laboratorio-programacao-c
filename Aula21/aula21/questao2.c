#include <stdio.h>

#define QTD 5

int main(void) {
    FILE *arquivo;
    int numero, i;

    /* Gravacao: um numero por linha */
    arquivo = fopen("numeros.txt", "w");
    if (arquivo == NULL) {
        perror("Erro ao abrir arquivo para escrita");
        return 1;
    }

    for (i = 0; i < QTD; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numero);
        fprintf(arquivo, "%d\n", numero);
    }

    fclose(arquivo);
    printf("\nNumeros gravados em numeros.txt\n");

    /* Leitura: le o arquivo e mostra na tela */
    arquivo = fopen("numeros.txt", "r");
    if (arquivo == NULL) {
        perror("Erro ao abrir arquivo para leitura");
        return 1;
    }

    printf("\nNumeros armazenados no arquivo:\n");
    while (fscanf(arquivo, "%d", &numero) == 1) {
        printf("%d\n", numero);
    }

    fclose(arquivo);
    return 0;
}
