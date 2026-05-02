// data: sáb, 02/05/2026
#include <stdio.h>
int main() {
    printf("\n1. Arrays + Loops\n");
    int vetor[5];
    for (int i = 0; i < 5; i++) {
        vetor[i] = i * 2;
    }
    printf("2. Vetor\n");
    for (int i = 0; i < 5; i++) {
        printf("vetor[%d] = %d\n", i , vetor[i]);
    }

    printf("\n3. Matriz + Loops Aninhados\n");
    int matriz[3][3]; 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = i * j;
            printf("matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
        }
    }

    printf("\n4. Arrays + Loops\n");
    int vetor2[5] = {1, 2, 3, 4, 5};
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += vetor2[i];
    }
    printf("Soma: %d", soma);


    printf("\n\n5. Matriz + Loops Aninhados 2\n");
    int matriz1[2][2] = {{1, 2}, {3, 4}};
    int matriz2[2][2] = {{5, 6}, {7, 8}};
    int matrizSoma[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];
            printf("matrizSoma[%d][%d] = %d\n", i, j, matrizSoma[i][j]);
        }
    }


    return 0;
}