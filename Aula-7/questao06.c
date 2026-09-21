#include <stdio.h>

int main() {
    int opcao;
    int veiculoPesado;
    const char *tipoVeiculo;
    printf("=== SISTEMA DE RANSPORTE ===\n");
    printf("1 - Motocicleta\n");
    printf("2 - Automovel\n");
    printf("3 - Van\n");
    printf("4 - Onibus\n");
    printf("5 - Caminhao\n");
    printf("\nDigite o tipo de veiculo: ");
    scanf("%d", &opcao);
    switch (opcao) {
        case 1:
            tipoVeiculo = "Motocicleta";
            veiculoPesado = 0;
            break;
        case 2:
            tipoVeiculo = "Automovel";
            veiculoPesado = 0;
            break;

        case 3:
            tipoVeiculo = "Van";
            veiculoPesado = 0;
            break;

        case 4:
            tipoVeiculo = "Onibus";
            veiculoPesado = 1;
            break;
        case 5:
            tipoVeiculo = "Caminhao";
            veiculoPesado = 1;
            break;
        default:
            printf("Opcao invalida.\n");
            return 0;
    }
    printf("\nVeiculo selecionado: %s\n", tipoVeiculo);
    const char *classificacao =
        (veiculoPesado == 1) ? "Veiculo pesado" : "Veiculo nao pesado";
    printf("Classificacao: %s\n", classificacao);
    return 0;
}