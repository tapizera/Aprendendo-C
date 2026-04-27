// data: 26/04/2026, dom

#include <stdio.h>
int main() {
    // i e j sendo iniciados ao mesmo tempo
    printf("\n1- i e j sendo iniciados ao mesmo tempo...\n");
    for (int i = 0, j = 10; i < j; i++, j--) {
        printf("i - %d, j - %d\n", i, j);
    }

    // uso de && e ou ||
    // incrementro ou decremento baseado em condicionais
    printf("\n2- uso de && e ||...\n");
    for (int i =0, j = 10; i< 5 && j > 5; i++, j--) {
        printf("i - %d, j - %d\n", i, j );
    }

    // operador ternário
    printf("\n3- operador ternário...\n");
    for (int i = 0;
            i < 100; // ? = se sim, : = se não
            i += (i % 2 == 0 ? 1 : 2)) 
        {
            printf("%d\n", i);
        }

    // continue e break
    printf("\n4- continue e break...\n");
    for (int i = 0; i < 10; i++) {
        if (i == 5) continue; // Pula a iteração quando i é 5
        if (i == 8) break;    // Sai do loop quando i é 8
        printf("%d ", i);
    }

    // tabuada de 9 tutorial
    printf("\n\n5- tabuada de 9 tutorial...\n");
    for (int i = 0; i <= 10; i++) {
        printf("9 x %d = %d\n", i, 9 * i);
    }

    return 0;
}