
#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    char perfil[20];
    char confirmacao[50];
    char mensagem[100];

    printf("Digite seu primeiro nome: ");
    scanf("%49s", nome);

    printf("Digite seu perfil (ADMIN ou COMUM): ");
    scanf("%19s", perfil);

    printf("\nQuantidade de caracteres do nome: %d\n",
           (int)strlen(nome));

    if (strcmp(perfil, "ADMIN") == 0) {
        printf("Perfil identificado: Administrador\n");
    }
    else if (strcmp(perfil, "COMUM") == 0) {
        printf("Perfil identificado: Usuario Comum\n");
    }
    else {
        printf("Perfil invalido!\n");
        return 0;
    }

    strcpy(confirmacao, nome);

    strcpy(mensagem, "Bem-vindo, ");
    strcat(mensagem, confirmacao);
    strcat(mensagem, "!");

    printf("\n===== DADOS CADASTRADOS =====\n");
    printf("Nome: %s\n", confirmacao);
    printf("Perfil: %s\n", perfil);
    printf("Mensagem: %s\n", mensagem);

    return 0;
}
