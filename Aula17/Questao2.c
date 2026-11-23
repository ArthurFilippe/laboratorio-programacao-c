
#include <stdio.h>
#include <string.h>

int main() {
    char produto[50];
    char categoria[20];
    char copia[50];
    char descricao[100];

    printf("Digite o nome do produto: ");
    scanf("%49s", produto);

    printf("Digite a categoria (HARDWARE ou PERIFERICO): ");
    scanf("%19s", categoria);

    printf("\nQuantidade de caracteres: %d\n",
           (int)strlen(produto));

    if (strcmp(categoria, "HARDWARE") == 0) {
        printf("Categoria identificada: Hardware\n");
    }
    else if (strcmp(categoria, "PERIFERICO") == 0) {
        printf("Categoria identificada: Periferico\n");
    }
    else {
        printf("Categoria invalida!\n");
        return 0;
    }

    strcpy(copia, produto);

    strcpy(descricao, "Produto: ");
    strcat(descricao, copia);

    printf("\n===== RESUMO DO CADASTRO =====\n");
    printf("Nome do produto: %s\n", copia);
    printf("Categoria: %s\n", categoria);
    printf("Descricao: %s\n", descricao);

    return 0;
}
