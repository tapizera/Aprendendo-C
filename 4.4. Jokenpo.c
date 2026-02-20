// data: 20/02/2026, sex, 18:20
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("\n--- Pedra, Papel, Tesoura ---\n");
    printf("1 - Jogar\n");
    printf("2 - Sair\n");
    printf("O que deseja?: ");
    int menu;
    scanf("%d", &menu);
    
    switch (menu) {
        // jogar
        case 1:
            printf("\n--- Jogar ---\n");
            printf("1 - Pedra\n");
            printf("2 - Papel\n");
            printf("3 - Tesoura\n");
            printf("O que deseja?: ");
            int player;
            scanf("%d", &player);

            // numero aleatorio do pc, precisa da biblioteca <stdlib.h> importada acima
            int pc;
            scanf("%d", rand() % 3);
            
            // pontuação
            int pontosdoplayer = 0;
            int pontosdopc = 0;
            // se ganhar
            // pontos += 1;


            // rock > tesoura
            if (player == 1 && pc == 3) {
                pontosdoplayer += 1;
            }
            // rock < papel
            else if (player == 1 && pc == 2) {
                pontosdopc += 1;
            }
            // rock = rock
            else if (player == 1 && pc == 1) {
                printf("empate");
            }


            // papel < tesoura
            else if (player == 2 && pc == 3) {
                pontosdopc += 1;
            }
            // papel = papel
            else if (player == 2 && pc == 2) {
                printf("empate");
            }
            // papel > rock
            else if (player == 2 && pc == 1) {
                pontosdoplayer += 1;
            }


            // tesoura < rock
            else if (player == 3 && pc == 1) {
                pontosdopc += 1;
            }
            // tesoura > papel
            else if (player == 3 && pc == 2) {
                pontosdoplayer += 1;
            }
            // tesoura = tesoura
            else if (player == 3 && pc == 3) {
                printf("empate");
            }

        // sair do jogo
        case 2:
            printf("Bye bye...");
            break;
    }

    return 0;
}