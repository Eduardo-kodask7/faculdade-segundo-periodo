#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media;
    const char *situacao;

    printf("=== SISTEMA DE AVALIACAO ACADEMICA ===\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    if (media >= 9.0) {
        situacao = "Excelente";
    } else if (media >= 7.0) {
        situacao = "Bom";
    } else if (media >= 5.0) {
        situacao = "Recuperacao";
    } else {
        situacao = "Reprovado";
    }

    // Operador ternario para verificar aprovacao
    const char *aprovacao = (media >= 5.0) ? "Aprovado" : "Nao Aprovado";

    printf("\nMedia: %.2f\n", media);
    printf("Classificacao: %s\n", situacao);
    printf("Situacao: %s\n", aprovacao);
    return 0;
}       