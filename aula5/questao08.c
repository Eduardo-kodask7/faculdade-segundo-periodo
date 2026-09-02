#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade <= 12) {
        printf("Crianca\n");
    } else if (idade <= 17) {
        printf("Adolescente\n");
    } else {
        printf("Adulto\n");
    }

    return 0;
}