// voltando aq dps de muito tempo... dps de terminar pyradigmas, terminar s.i. e hoje são 23/04/2026, qui, 18h13, à tarde eu tava preparando aq p começar, pq antes eu acho q eu programava no Visual Studio e agr aprendi a consegui migrar pra cá p VS Code, bem melhor btw


#include <stdio.h>

int main() {
// 1. WHILE -- "Enquanto"
    printf("1. WHILE:\n");
    int i = 0; // Variável de incremento
    while (i < 5) // Condição
    {
        printf("%d\n", i); // Saída
        i++; // Incremento
    }

// 1.2 WHILE - detectar numero negativo
    printf("\n1.2. Detectar numero negativo com WHILE:\n");
    int num;
   
    printf("\nDigite um numero (negativo para sair): \n");
    scanf("%d", &num);
   
    while (num >= 0) {
        printf("Você digitou: %d\n", num);
       
        printf("Digite um numero (negativo para sair): \n");
        scanf("%d", &num);
    }
    printf("Numero negativo detectado. Saindo...\n");


// 2. DO-WHILE -- "Até que"
    printf("\n2. DO-WHILE:\n");
    int j = 0; // Variável de incremento
    do // Condição - "fazer isso..."
    {
        printf("%d\n", j); // Saída
        j++; // Incremento
    } 
    while (j < 5); // Verificação da condição - "até que isso seja verdade"

// 2.2 DO-WHILE prático
    printf("\n2.2. Menu com DO-WHILE:\n");
    int option;
   
    do { // fazer isso...
        printf("Menu:\n");
        printf("1. Opção 1\n");
        printf("2. Opção 2\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &option);
       
        switch(option) {
            case 1:
                printf("Você escolheu a opção 1\n");
                break;
            case 2:
                printf("Você escolheu a opção 2\n");
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (option != 3); // até que a opção seja 3 (sair)
   
// 3. FOR -- quando o tamaho do loop já for previsível

    /* sintaxe: 
    for (inicialização; condição; incremento) {
        // código a ser executado
    }   
    */

    printf("\n3. FOR\n");
    for (int k = 0; k < 5; k++) // inicialização; condição; incremento
    {
        printf("%d\n", k); // Saída
    }

    printf("\n3.2. FOR - numeros pares de 1 a 20:\n");
    for (int k2 = 1; k2 <= 20; k2++) {
        if (k2 % 2 == 0) { // condicao pra ser par
            printf("%d\n", k2);
        }
    }
   
    printf("\n3.3. FOR - numeros de 0 a 100 de 10 em 10:\n");
    for (int k3 = 0; k3 <= 100; k3 += 10) {
        printf("%d\n", k3);
    }
   
    printf("\n3.4. FOR - numeros de 0 a 100, de 10 em 10:\n");
    for (int k4 = 0; k4 <= 100; k4 += 10) {
        printf("%d\n", k4);
    }
   
    printf("\n3.5. FOR - numeros de 100 a 0, de 10 em 10:\n");
    for (int k5 = 100; k5 >= 0; k5 -= 10) {
        printf("%d\n", k5);
    }
    

    return 0;
}