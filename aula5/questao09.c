#include <stdio.h>

int main() {
    float salario;

    printf("Digite o salario mensal: R$ ");
    scanf("%f", &salario);

    if (salario <= 2000.0) {
        printf("Faixa 1\n");
    } else if (salario <= 5000.0) {
        printf("Faixa 2\n");
    } else {
        printf("Faixa 3\n");
    }

    return 0;
}