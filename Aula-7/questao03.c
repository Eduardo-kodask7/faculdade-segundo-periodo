#include <stdio.h>

int main() {
    float valorCompra;
    float percentualDesconto;
    float valorDesconto;
    float valorFinal;

    printf("=== SISTEMA DE DESCONTO EM COMPRAS ===\n");
    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorCompra);

    if (valorCompra <= 500.00) {
        percentualDesconto = 0.0;
    } else if (valorCompra <= 1000.00) {
        percentualDesconto = 5.0;
    } else if (valorCompra <= 2000.00) {
        percentualDesconto = 10.0;
    } else {
        percentualDesconto = 15.0;
    }

    valorDesconto = valorCompra * percentualDesconto / 100;
    valorFinal = valorCompra - valorDesconto;

    printf("\nValor original: R$ %.2f\n", valorCompra);
    printf("Percentual de desconto: %.0f%%\n", percentualDesconto);
    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Valor final da compra: R$ %.2f\n", valorFinal);
    return 0;
}