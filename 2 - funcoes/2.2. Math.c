// data: 11/02/2026, qua
#include <stdio.h>
#include <math.h> // pra +soma -sub *multi /divisao e %modulo nao precisa
// math.h tem sqrt(), pow(), etc...

int main () {
    //definindo variáveis e "funções"
    int a;
    int b;

    // // Operadores aritméticos
    // int soma = (int) a + (int) b;
    // int sub = a - b;
    // int multi = a * b;
    // float div = a / b;
    // float modul = a % b;

    // // Operadores de atribuição
    // a += 2; // a será 12
    // b *= 3; // b será 15

    // // Operadores de incremento e decremento
    // a++; // a será 13
    // b--; // b será 14


    //inputando a e b
    printf("numero a: ");
    scanf("%d", &a);
    printf("numero b: ");
    scanf("%d", &b);

    //pritando as operações
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %.2f\n", a, b, (float) a / b); 
    printf("%d °/o %d = %d\n", a, b, a % b);
        // %2f - errado 2 antes da virgula , %.2f - 2 dps da virgula

    return 0;
}