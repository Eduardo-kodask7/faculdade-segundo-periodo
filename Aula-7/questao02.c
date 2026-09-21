#include <stdio.h>

int main() {
    int opcao;

    printf("=== SISTEMA DE ATENDIMENTO BANCARIO ===\n");
    printf("1 - Saldo\n");
    printf("2 - Extrato\n");
    printf("3 - Transferencia\n");
    printf("4 - Pagamento\n");
    printf("5 - Emprestimo\n");
    printf("6 - Encerrar\n");
    printf("\nDigite uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Voce selecionou a opcao Saldo.\n");
            break;

        case 2:
            printf("Voce selecionou a opcao Extrato.\n");
            break;

        case 3:
            printf("Voce selecionou a opcao Transferencia.\n");
            break;

        case 4:
            printf("Voce selecionou a opcao Pagamento.\n");
            break;

        case 5:
            printf("Voce selecionou a opcao Emprestimo.\n");
            break;

        case 6:
            printf("Atendimento encerrado. Obrigado!\n");
            break;

        default:
            printf("Erro: opcao inexistente.\n");
    }
    return 0;
}