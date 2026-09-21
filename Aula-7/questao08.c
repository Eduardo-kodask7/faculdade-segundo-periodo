#include <stdio.h>

int main() {
    float valorCompra;
    float percentualDesconto;
    float valorDesconto;
    float valorFinal;
    int formaPagamento;
    const char *nomePagamento;
    printf("=== SISTEMA DE PAGAMENTO ===\n");
    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorCompra);
    printf("\nFormas de pagamento:\n");
    printf("1 - PIX\n");
    printf("2 - Debito\n");
    printf("3 - Credito\n");
    printf("4 - Boleto\n");
    printf("\nEscolha a forma de pagamento: ");
    scanf("%d", &formaPagamento);

    switch (formaPagamento) {
        case 1:
            nomePagamento = "PIX";
            percentualDesconto = 20.0;
            break;
        case 2:
            nomePagamento = "Debito";
            percentualDesconto = 15.0;
            break;

        case 3:
            nomePagamento = "Credito";
            percentualDesconto = 5.0;
            break;
        case 4:
            nomePagamento = "Boleto";
            percentualDesconto = 10.0;
            break;
        default:
            printf("Forma de pagamento invalida.\n");
            return 0;
    }

    valorDesconto = valorCompra * percentualDesconto / 100;
    valorFinal = valorCompra - valorDesconto;
    printf("\n=== RESUMO DA COMPRA ===\n");
    printf("Forma de pagamento: %s\n", nomePagamento);
    printf("Valor da compra: R$ %.2f\n", valorCompra);
    printf("Percentual de desconto: %.0f%%\n", percentualDesconto);
    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Valor final: R$ %.2f\n", valorFinal);
    return 0;
}