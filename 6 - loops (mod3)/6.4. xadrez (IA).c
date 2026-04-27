// data: a mesma, 23/04/2026, qui
//qual a necessidade de fazer um xadrez cara??? E AINDA MAIS EM C????

/*
    Torre: Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita.
     
    Bispo: Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
     
    Rainha: Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.
*/

#include <stdio.h>

// Constantes para o número de casas
const int TORRE_CASAS = 5;
const int BISPO_CASAS = 5;
const int RAINHA_CASAS = 8;
const int CAVALO_PASSOS = 3; // 2 em uma direção + 1 na perpendicular

// Função para mover a Torre
void moverTorre(int casas) {
    printf("\n=== TORRE ===\n");
    for (int i = 0; i < casas; i++) {   
        printf("Casa %d: Direita\n", i + 1);
    }
}

// Função para mover o Bispo
void moverBispo(int casas) {
    printf("\n=== BISPO ===\n");
    for (int i = 0; i < casas; i++) {   
        printf("Casa %d: Cima, Direita\n", i + 1);
    }
}

// Função para mover a Rainha
void moverRainha(int casas) {
    printf("\n=== RAINHA ===\n");
    for (int i = 0; i < casas; i++) {   
        printf("Casa %d: Esquerda\n", i + 1);
    }
}

// Função recursiva para o Bispo (Nível Mestre)
void moverBispoRecursivo(int casas, int atual) {
    if (atual >= casas) return;
    printf("Casa %d: Cima, Direita\n", atual + 1);
    moverBispoRecursivo(casas, atual + 1);
}

// Função recursiva para a Torre (Nível Mestre)
void moverTorreRecursivo(int casas, int atual) {
    if (atual >= casas) return;
    printf("Casa %d: Direita\n", atual + 1);
    moverTorreRecursivo(casas, atual + 1);
}

// Função para mover o Cavalo em L (Nível Aventureiro)
void moverCavalo() {
    printf("\n=== CAVALO (movimento em L) ===\n");
    
    // Loop aninhado para movimento em L
    for (int vertical = 0; vertical < 2; vertical++) {
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            if (vertical == 0) {
                printf("Passo %d: Cima\n", vertical + 1);
            } else {
                printf("Passo %d: Esquerda\n", vertical + 2);
            }
        }
    }
    printf("Passo 3: Esquerda\n");
}

// Função com loops avançados (Nível Mestre)
void moverCavaloAvancado() {
    printf("\n=== CAVALO AVANÇADO (com break e continue) ===\n");
    
    int passo = 0;
    for (int i = 0; i < 3; i++) {
        if (i == 1) {
            continue; // Pula o segundo movimento vertical
        }
        passo++;
        if (passo == 3) {
            printf("Passo %d: Esquerda (break)\n", passo);
            break;
        }
        printf("Passo %d: ", passo);
        if (i == 0) {
            printf("Cima\n");
        } else if (i == 2) {
            printf("Esquerda\n");
        }
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    moverTorre(TORRE_CASAS);
    moverBispo(BISPO_CASAS);
    moverRainha(RAINHA_CASAS);
    
    // Nível Aventureiro - Movimentação do Cavalo
    moverCavalo();
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    printf("\n=== BISPO (Recursivo) ===\n");
    moverBispoRecursivo(BISPO_CASAS, 0);
    
    printf("\n=== TORRE (Recursivo) ===\n");
    moverTorreRecursivo(TORRE_CASAS, 0);
    
    // Loop com variáveis múltiplas e condições avançadas
    moverCavaloAvancado();
    
    printf("\n=== FIM ===\n");
    return 0;
}