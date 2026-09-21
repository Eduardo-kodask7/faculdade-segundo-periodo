#include <stdio.h>

int main() {
    int setor;
    int prioridade;
    const char *nomeSetor;
    const char *nomePrioridade;
    const char *atendimentoPrioritario;

    printf("=== SISTEMA INTEGRADO DE ATENDIMENTO ===\n");
    printf("1 - Suporte Tecnico\n");
    printf("2 - Financeiro\n");
    printf("3 - Recursos Humanos\n");
    printf("4 - Comercial\n");
    printf("5 - Desenvolvimento\n");
    printf("\nDigite o setor desejado: ");
    scanf("%d", &setor);
    switch (setor) {
        case 1:
            nomeSetor = "Suporte Tecnico";
            break;

        case 2:
            nomeSetor = "Financeiro";
            break;

        case 3:
            nomeSetor = "Recursos Humanos";
            break;

        case 4:
            nomeSetor = "Comercial";
            break;
        case 5:
            nomeSetor = "Desenvolvimento";
            break;
        default:
            printf("Setor invalido.\n");
            return 0;
    }
    printf("\nSetor selecionado: %s\n", nomeSetor);
    printf("\nEscolha a prioridade:\n");
    printf("1 - Baixa\n");
    printf("2 - Media\n");
    printf("3 - Alta\n");
    printf("\nDigite a prioridade: ");
    scanf("%d", &prioridade);
    switch (prioridade) {
        case 1:
            nomePrioridade = "Baixa";
            break;
        case 2:
            nomePrioridade = "Media";
            break;

        case 3:
            nomePrioridade = "Alta";
            break;
        default:
            printf("Prioridade invalida.\n");
            return 0;
    }

    atendimentoPrioritario =
        (prioridade == 3) ? "Sim" : "Nao";
    printf("\n=== RESUMO DO ATENDIMENTO ===\n");
    printf("Setor: %s\n", nomeSetor);
    printf("Prioridade: %s\n", nomePrioridade);
    printf("Atendimento prioritario: %s\n", atendimentoPrioritario);
    return 0;
}