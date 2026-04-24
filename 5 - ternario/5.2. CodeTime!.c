// data: 23/02/2026, seg, 12:08
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main () {
    srand(time(NULL)); // gpt disse p colocar

    printf("\n--- Maior, Menor ou Igual ---\n");
    printf("Escolha um número\ne adivinhe se é >, < ou = ao numero do oponente\nPreparado? Então vamo\n");

    int meunumero;
    printf("\nescolha um número de 1 à 100: ");
    scanf("%d", &meunumero);

    // erro, fechar
    if (meunumero > 100) {
        printf("\nerro, %d é menor que 100\n", meunumero);
        return 0;

    // erro, fechar
    } else if (meunumero < 0) {
        printf("\nerro, %d tem que ser maior que 1\n", meunumero);
        return 0;

    // tudo certo, prosseguir
    } else {
        printf("\npc escolheu um número\n");
    }

    int aposta;
    printf("\n--- Adivinhe ---");
    printf("\n1 - Maior (>)\n2 - Menor (<)\n3 - Igual (=)\nmeu número é: ");
    scanf("%d", &aposta);

    // computador gera numero de 1 a 100
    int pc = rand() % 100 + 1;

    // printar se é >, < ou =
    if (meunumero > pc) {
        printf("\n%d > %d", meunumero, pc);
    } else if (meunumero < pc) {
        printf("\n%d < %d", meunumero, pc);
    } else {
        printf("\n%d = %d", meunumero, pc);
    }

    // resultado
    char* result;
    switch (aposta) {
        case 1: // maior
            // if meunumero for maior q o do pc eu ganho, se nao, pc ganha
            result = meunumero > pc ? "vc ganhou" : "vc perdeu";
            printf("\n%s\n", result);

            
        break;

        case 2: // menor
            result = meunumero < pc ? "vc ganhou" : "vc perdeu";
            printf("\n%s\n", result);
        break;

        case 3: // igual
            result = meunumero == pc ? "vc ganhou" : "vc perdeu";
            printf("\n%s\n", result);
        break;

        default: // inválido
            printf("\nerro no switch\n");
        break;    
    }
    return 0;
}