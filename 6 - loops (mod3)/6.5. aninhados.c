// data: 26/04/2026, dom
#include <stdio.h>
 
int main() {
    // usando for
    printf("Tabuada usando for:\n");
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%d\t", i * j);
        }
        printf("\n");
    }

    // usando while
    printf("\nTabuada usando while:\n");
    int i = 1;
    while (i <= 10) {
        int j = 1;
        while (j <= 10) {
            printf("%d\t", i * j);
            j++;
        }
        printf("\n");
        i++;
    }

    // usando do-while
    printf("\nTabuada usando do-while:\n");
    int k = 1;
    do {
        int j = 1;
        do {
            printf("%d\t", k * j);
            j++;
        } while (j <= 10);
        printf("\n");
        k++;
    } while (k <= 10);

    // numeros pares
    printf("\nNúmeros pares\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if ((i + j) % 2 == 0) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }

    // MNOPQ...
    printf("\nTodos os dígitos...\n");
    char letra = 'A';

    for (int i = 1; i <= 26; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", letra);
            letra++;
        }
        printf("\n");
    }

    // ABCDE...
    printf("\nTriângulo Alfabético...\n");
    for (int i = 1; i <= 26; i++) {

        char letra = 'A';

        for (int j = 1; j <= i; j++) {
            printf("%c ", letra);
            letra++;
        }
        printf("\n");
    }
    
    // tabuada aninhada
    for (int i = 1; i <= 10; i++) {
        for (int j = 0; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i*j); 
        }
        printf("\n");
    }

    // coutdown com loop aninhado
    printf("\nFechando sistema em...\n");
    int segundos;
   
    // contar até 500 mil pra simular uns segundo de atraso
    for (segundos = 10; segundos >= 0; segundos--) {
        printf("%d\n", segundos);
       
        // Loop aninhado para simular um atraso
        for (int i = 0; i < 500000000; i++) {
            // Apenas para simular um atraso
        }
    }
 
    printf("Acabou\n");
   
    return 0;
}
