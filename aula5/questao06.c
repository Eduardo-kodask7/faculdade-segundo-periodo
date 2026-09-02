#include <stdio.h>

int main() {
    float temperatura;

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    if (temperatura < 15.0) {
        printf("Frio\n");
    } else if (temperatura <= 25.0) {
        printf("Agradavel\n");
    } else {
        printf("Quente\n");
    }

    return 0;
}