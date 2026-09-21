#include <stdio.h>

int main() {
    int codigo;
    printf("=== SISTEMA DE CLASSIFICACAO DE USUARIOS ===\n");
    printf("1 - Administrador\n");
    printf("2 - Gerente\n");
    printf("3 - Analista\n");
    printf("4 - Desenvolvedor\n");
    printf("5 - Usuario\n");
    printf("\nDigite o codigo do usuario: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("Perfil: Administrador\n");
            break;
        case 2:
            printf("Perfil: Gerente\n");
            break;
        case 3:
            printf("Perfil: Analista\n");
            break;

        case 4:
            printf("Perfil: Desenvolvedor\n");
            break;

        case 5:
            printf("Perfil: Usuario\n");
            break;
        default:
            printf("Perfil invalido.\n");
    }
    return 0;
}