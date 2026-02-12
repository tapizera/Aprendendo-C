// data: 11/02/2026, qua
#include <stdio.h>

int main () {
    int nota1, nota2, nota3;
    float media = (nota1 + nota2 + nota3) / 3;

    printf("digite uma nota: ");
    scanf("%d", &nota1);
    printf("digite a 2° nota: ");
    scanf("%d", &nota2);
    printf("digite a 3° nota: ");
    scanf("%d", &nota3);
    printf("a média é: %.2f", media);

    return 0;
}