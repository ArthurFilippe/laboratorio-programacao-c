#include <stdio.h>

#define MAX_FUNC 5

typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;

/* Le os dados de um funcionario digitados pelo usuario */
Funcionario lerFuncionario(int numero) {
    Funcionario f;

    printf("\n--- Funcionario %d ---\n", numero);

    printf("Nome: ");
    scanf(" %49[^\n]", f.nome);

    printf("Salario: ");
    scanf("%f", &f.salario);

    printf("Horas extras: ");
    scanf("%d", &f.horasExtras);

    return f;
}

/* Acrescenta um funcionario ao final do arquivo (modo "a") */
int gravarFuncionario(const char *nomeArquivo, Funcionario f) {
    FILE *arquivo = fopen(nomeArquivo, "a");

    if (arquivo == NULL) {
        return 0;
    }

    /* Formato: nome;salario;horasExtras */
    fprintf(arquivo, "%s;%.2f;%d\n", f.nome, f.salario, f.horasExtras);
    fclose(arquivo);
    return 1;
}

/* Le o arquivo e apresenta todos os funcionarios gravados */
void listarFuncionarios(const char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "r");
    Funcionario f;
    int contador = 0;

    if (arquivo == NULL) {
        printf("\nNenhum funcionario cadastrado.\n");
        return;
    }

    printf("\n===== FUNCIONARIOS CADASTRADOS =====\n");

    while (fscanf(arquivo, " %49[^;];%f;%d", f.nome, &f.salario, &f.horasExtras) == 3) {
        contador++;
        printf("\nFuncionario %d\n", contador);
        printf("Nome: %s\n", f.nome);
        printf("Salario: R$ %.2f\n", f.salario);
        printf("Horas extras: %d\n", f.horasExtras);
    }

    fclose(arquivo);
}

int main(void) {
    int quantidade, i;
    Funcionario f;

    printf("Quantos funcionarios deseja cadastrar agora (0 a %d)? ", MAX_FUNC);
    scanf("%d", &quantidade);

    for (i = 0; i < quantidade; i++) {
        f = lerFuncionario(i + 1);

        if (!gravarFuncionario("funcionarios.txt", f)) {
            perror("Erro ao gravar no arquivo");
            return 1;
        }
    }

    if (quantidade > 0) {
        printf("\nDados gravados com sucesso em funcionarios.txt\n");
    }

    listarFuncionarios("funcionarios.txt");

    return 0;
}
