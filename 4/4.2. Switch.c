// data: 20/02/2026, sex, 16:10
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// A estrutura SWITCH funciona como um MENU. Você fornece uma variável de controle e, com base no valor dessa variável, o programa executa o bloco de código correspondente.

int main () {
    // exemplo
    int opcao; // funciona como controle
    printf("1 - gravar \n");
    printf("2 - editar \n");
    printf("3 - postar \n");
    printf("Escolha: ");
    scanf("%d", opcao);
    switch (opcao) {
        case 1:
            printf("gravado com sucesso\n");
            break;
        case 2:
            printf("editado com sucesso\n");
            break;
        case 3:
            printf("postado com sucesso\n");
            break;
        default:
            printf("nada foi feito sucesso\n");
            break;
    }

    char teste; 
    printf("s ou n?: ");
    scanf(" %c", &teste);

    switch (teste) {
        case 's': 
            printf("sim");
            break;
        case 'n':
            printf("nao");
            break;
        default:
            printf("talvez");
            break;
    }   

    // No caso aí deu erro e Codex corrigiu assim:
    char teste2[4];
    printf("sim ou nao?: ");
    scanf("%3s", teste2);
    if (strcmp(teste2, "sim") == 0) {
        printf("sim");
    } else if (strcmp(teste2, "nao") == 0) {
        printf("nao");
    } else {
        printf("talvez");
    }
    // aparentemente oq eu queria nao da pra fazer com switch
    // pq switch nao tanka string, só int e char unico

    return 0;
}