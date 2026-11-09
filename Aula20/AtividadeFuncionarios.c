#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} Funcionario;

int main() {
    Funcionario lista[2];
    int i;


    for (i = 0; i < 2; i++) {
        printf("Digite o nome do funcionario %d: ", i + 1);
        scanf(" %49[^\n]", lista[i].nome); 

        printf("Digite a idade: ");
        scanf("%d", &lista[i].idade);

        printf("Digite o salario: ");
        scanf("%f", &lista[i].salario);
        printf("\n");
    }

    printf("\n--- DADOS DOS FUNCIONARIOS ---\n");
    printf("Nome do primeiro funcionario: %s\n", lista[0].nome);
    printf("Idade do primeiro funcionario: %d\n", lista[0].idade);
    printf("Salario do primeiro funcionario: %.1f\n", lista[0].salario);
    
    if (lista[0].salario > lista[1].salario) {
        float diferenca = lista[0].salario - lista[1].salario;
        printf("O maior salario e do(a) %s: R$ %.2f\n", lista[0].nome, lista[0].salario);
        printf("A diferenca salarial e de: R$ %.2f\n", diferenca);
    } 
    else if (lista[1].salario > lista[0].salario) {
        float diferenca = lista[1].salario - lista[0].salario;
        printf("O maior salario e do %s: %.2f\n", lista[1].nome, lista[1].salario);
        printf("A diferenca salarial e de: %.2f\n", diferenca);
    } 
    else {
        printf("Os salarios sao iguais: R$ %.2f\n", lista[0].salario);
    }

    return 0;
}
