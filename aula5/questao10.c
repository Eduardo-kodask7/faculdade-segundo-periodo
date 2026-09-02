#include <stdio.h>

int main() {
    float media;

    printf("Digite a media final: ");
    scanf("%f", &media);

    printf("Media informada: %.1f\n", media);

    if (media >= 7.0) {
        printf("Aprovado\n");
    } else if (media >= 5.0) {
        printf("Recuperacao\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}