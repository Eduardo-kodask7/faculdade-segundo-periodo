#include <stdio.h>

int main() {
    float temperatura;
    const char *classificacao;
    const char *acimaDe30;

    printf("=== SISTEMA DE CLASSIFICACAO DE TEMPERATURA ===\n");
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &temperatura);
    if (temperatura < 0) {
        classificacao = "Muito frio";
    } else if (temperatura <= 15) {
        classificacao = "Frio";
    } else if (temperatura <= 25) {
        classificacao = "Agradavel";
    } else if (temperatura <= 35) {
        classificacao = "Quente";
    } else {
        classificacao = "Muito quente";
    }
    acimaDe30 = (temperatura > 30) ? "Sim" : "Nao";
    printf("\nTemperatura: %.1f C\n", temperatura);
    printf("Classificacao: %s\n", classificacao);
    printf("Temperatura acima de 30 C? %s\n", acimaDe30);
    return 0;
}