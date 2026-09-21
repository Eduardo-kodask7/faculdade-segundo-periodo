#include <stdio.h>

int main() {
    int idade;
    const char *faixaEtaria;
    const char *maioridade;
    printf("=== SISTEMA DE FAIXA ETARIA ===\n");
    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade < 0) {
        printf("Idade invalida.\n");
        return 0;
    } else if (idade <= 12) {
        faixaEtaria = "Crianca";
    } else if (idade <= 17) {
        faixaEtaria = "Adolescente";
    } else if (idade <= 59) {
        faixaEtaria = "Adulto";
    } else {
        faixaEtaria = "Idoso";
    } 

    maioridade = (idade >= 18) ? "Maior de idade" : "Menor de idade";
    printf("\nIdade: %d anos\n", idade);
    printf("Faixa etaria: %s\n", faixaEtaria);
    printf("Situacao: %s\n", maioridade);
    return 0;
}