
#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    char codigo[10];
    char copia[50];
    char mensagem[100];
    char curso[50];

    printf("Digite o primeiro nome do estudante: ");
    scanf("%49s", nome);

    printf("Digite o codigo do curso (CC ou SI): ");
    scanf("%9s", codigo);

    if (strcmp(codigo, "CC") == 0) {
        strcpy(curso, "Ciencia da Computacao");
    }
    else if (strcmp(codigo, "SI") == 0) {
        strcpy(curso, "Sistemas de Informacao");
    }
    else {
        printf("Codigo de curso invalido!\n");
        return 0;
    }

    printf("\nQuantidade de caracteres do nome: %d\n",
           (int)strlen(nome));

    strcpy(copia, nome);

    strcpy(mensagem, "Ola, ");
    strcat(mensagem, copia);
    strcat(mensagem, "!");

    printf("\n===== DADOS DO ESTUDANTE =====\n");
    printf("Nome: %s\n", copia);
    printf("Curso: %s\n", curso);
    printf("Mensagem: %s\n", mensagem);

    return 0;
}
