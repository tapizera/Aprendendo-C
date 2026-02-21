// data: 21/02/2026, sáb, 17:00 (com ajuda do GPT)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* emoji(int escolha) {
    switch(escolha) {
        case 1: return "👊";
        case 2: return "✋";
        case 3: return "✌️";
        default: return "?";
    }
}

void jokenpo(int *pontosdoplayer, int *pontosdopc) {

    if (*pontosdoplayer == 3 || *pontosdopc == 3) {
        printf("\n--- FIM DE JOGO ---\n");
        printf("Player  %d X %d  PC\n\n", *pontosdoplayer, *pontosdopc);
        return;
    }
    else {
        printf("\n--- Jokenpo ---");
    }

    printf("\n1 - Pedra 👊\n2 - Papel✋\n3 - Tesoura✌️\nEu escolho: ");

    int player;
    scanf("%d", &player);

    int pc = (rand() % 3) + 1;

    // printf("PC escolheu: %d\n", pc);
    // vou colocar a escolha na tabelinha de Player X PC

    if (player == pc) {
        printf("\nEmpate!");
        printf("\nPlayer %s X %s PC", emoji(player), emoji(pc));
    }
    else if ((player == 1 && pc == 3) || (player == 2 && pc == 1) || (player == 3 && pc == 2)){
        printf("\nPlayer %s X %s PC", emoji(player), emoji(pc));
        (*pontosdoplayer)++;
    }
    else {
        printf("\nPlayer %s X %s PC", emoji(player), emoji(pc));
        (*pontosdopc)++;
    }

    printf("\nPlayer  %d X %d  PC\n", *pontosdoplayer, *pontosdopc);

    jokenpo(pontosdoplayer, pontosdopc); // recursão controlada
}

int main() {
    int pontosdoplayer = 0;
    int pontosdopc = 0;

    srand(time(NULL));

    jokenpo(&pontosdoplayer, &pontosdopc);

    return 0;
}