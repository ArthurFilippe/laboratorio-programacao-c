#include <stdio.h>

#define MAX_FUNC 5

int main(void) {
    FILE *arquivo;
    char nome[50];
    int matricula;
    int quantidade, i;

    printf("Quantos funcionarios deseja cadastrar (1 a %d)? ", MAX_FUNC);
    scanf("%d", &quantidade);

    arquivo = fopen("funcionarios.txt", "w");
    if (arquivo == NULL) {
        perror("Erro ao abrir arquivo");
        return 1;
    }

    for (i = 0; i < quantidade; i++) {
        printf("\n--- Funcionario %d ---\n", i + 1);

        printf("Nome: ");
        scanf(" %49[^\n]", nome);

        printf("Matricula: ");
        scanf("%d", &matricula);

        fprintf(arquivo, "Nome: %s\n", nome);
        fprintf(arquivo, "Matricula: %d\n\n", matricula);
    }

    if (fclose(arquivo) != 0) {
        perror("Erro ao salvar os dados");
        return 1;
    }

    printf("\nDados gravados com sucesso em funcionarios.txt\n");
    return 0;
}
