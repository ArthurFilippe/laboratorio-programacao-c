#include <stdio.h>
#include <string.h>

#define MAX_PACIENTES 5
#define TAM_NOME 50
#define NUM_FATORES 13

#define IDADE        0
#define PRESSAO      1
#define TABAGISMO    2
#define DIABETES     3
#define HIST_CARDIACO 4
#define LDL          5
#define PESO         6
#define ALTURA       7
#define SEDENTARISMO 8
#define ULTRAPROC    9
#define ESTRESSE     10
#define SONO         11
#define SEXO_MASC    12

void lerPaciente(char nomes[][TAM_NOME], float fatores[][NUM_FATORES], int i) {
    printf("\n--- Paciente %d ---\n", i + 1);

    printf("Nome: ");
    scanf(" %49[^\n]", nomes[i]);

    printf("Idade: ");
    scanf("%f", &fatores[i][IDADE]);

    printf("Pressao arterial sistolica (mmHg): ");
    scanf("%f", &fatores[i][PRESSAO]);

    printf("Tabagismo (1 - Sim / 0 - Nao): ");
    scanf("%f", &fatores[i][TABAGISMO]);

    printf("Diabetes (1 - Sim / 0 - Nao): ");
    scanf("%f", &fatores[i][DIABETES]);

    printf("Historico de doenca cardiaca (1 - Sim / 0 - Nao): ");
    scanf("%f", &fatores[i][HIST_CARDIACO]);

    printf("Colesterol LDL (mg/dL): ");
    scanf("%f", &fatores[i][LDL]);

    printf("Peso (kg): ");
    scanf("%f", &fatores[i][PESO]);

    printf("Altura (m): ");
    scanf("%f", &fatores[i][ALTURA]);

    printf("Sedentarismo (1 - Sim / 0 - Nao): ");
    scanf("%f", &fatores[i][SEDENTARISMO]);

    printf("Alimentacao rica em ultraprocessados (1 - Sim / 0 - Nao): ");
    scanf("%f", &fatores[i][ULTRAPROC]);

    printf("Estresse cronico elevado (1 - Sim / 0 - Nao): ");
    scanf("%f", &fatores[i][ESTRESSE]);

    printf("Sono inadequado (1 - Sim / 0 - Nao): ");
    scanf("%f", &fatores[i][SONO]);

    printf("Sexo biologico masculino (1 - Sim / 0 - Nao): ");
    scanf("%f", &fatores[i][SEXO_MASC]);
}

float calcularIMC(float peso, float altura) {
    return peso / (altura * altura);
}

int calcularPontuacao(float fatores[]) {
    int pontos = 0;

    if (fatores[IDADE] >= 65)     pontos += 3;
    if (fatores[PRESSAO] >= 160)  pontos += 3;
    if (fatores[TABAGISMO] == 1)  pontos += 3;

    if (fatores[DIABETES] == 1)       pontos += 2;
    if (fatores[HIST_CARDIACO] == 1)  pontos += 2;
    if (fatores[LDL] >= 160)          pontos += 2;
    if (calcularIMC(fatores[PESO], fatores[ALTURA]) >= 30) pontos += 2;

    if (fatores[SEDENTARISMO] == 1) pontos += 1;
    if (fatores[ULTRAPROC] == 1)    pontos += 1;
    if (fatores[ESTRESSE] == 1)     pontos += 1;
    if (fatores[SONO] == 1)         pontos += 1;
    if (fatores[SEXO_MASC] == 1)    pontos += 1;

    return pontos;
}

const char *classificarRisco(int pontuacao) {
    if (pontuacao <= 4)  return "Menor de 10%";
    if (pontuacao <= 9)  return "Entre 10% e 20%";
    if (pontuacao <= 14) return "Entre 20% e 30%";
    if (pontuacao <= 18) return "Entre 30% e 50%";
    return "Acima de 50%";
}

void exibirCadastro(char nomes[][TAM_NOME], int qtd) {
    int i;

    printf("\n========================================\n");
    printf("   SISTEMA DE ANALISE DE RISCO\n");
    printf("========================================\n\n");
    printf("Quantidade de pacientes: %d\n\n", qtd);

    for (i = 0; i < qtd; i++) {
        printf("Paciente %d: %s\n", i + 1, nomes[i]);
    }
}

void exibirRelatorio(char nomes[][TAM_NOME], float fatores[][NUM_FATORES], int qtd) {
    int i, pontuacao;

    printf("\n========================================\n");
    printf("   RELATORIO DE RISCO\n");
    printf("========================================\n\n");

    for (i = 0; i < qtd; i++) {
        pontuacao = calcularPontuacao(fatores[i]);
        printf("Paciente: %s\n", nomes[i]);
        printf("Classificacao: %s\n\n", classificarRisco(pontuacao));
    }

    printf("========================================\n");
}

int main() {
    char nomes[MAX_PACIENTES][TAM_NOME];
    float fatores[MAX_PACIENTES][NUM_FATORES];
    int qtd, i;

    printf("Quantos pacientes deseja cadastrar (1 a %d)? ", MAX_PACIENTES);
    scanf("%d", &qtd);

    for (i = 0; i < qtd; i++) {
        lerPaciente(nomes, fatores, i);
    }

    exibirCadastro(nomes, qtd);
    exibirRelatorio(nomes, fatores, qtd);

    return 0;
}