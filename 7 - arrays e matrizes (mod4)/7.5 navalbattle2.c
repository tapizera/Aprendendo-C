// data: sáb, 02/05/2026

/* O que FAZER
1. Criar um Tabuleiro 10x10: 
    Declare uma matriz (array bidimensional) de tamanho 10x10 para representar o tabuleiro do Batalha Naval. água valor 0.

2. Posicionar 4 Navios:
    2.1. Dois navios devem estar posicionados horizontalmente ou verticalmente (como no nível anterior).
    2.2. Os outros dois navios devem ser posicionados na diagonal. Considere que um navio diagonal ocupa posições onde a linha e a coluna aumentam ou diminuem simultaneamente (ex: tabuleiro[i][i] ou tabuleiro[i][9-i] para um tabuleiro 10x10).
    2.3. Represente as posições ocupadas pelos navios com o valor 3.
    2.4. Escolha as coordenadas iniciais.
    2.5. Valide que as posições dos navios estejam dentro dos limites do tabuleiro e que eles não se sobreponham.

3. Exibir o Tabuleiro:
    Utilize loops aninhados e o comando printf para exibir o tabuleiro completo no console. A saída deve mostrar a matriz 10x10, com 0s representando água e 3s representando as partes dos navios. Utilize espaços para alinhar a saída e facilitar a visualização do tabuleiro.
*/

/* bagulho da diagonal
if o num da coluna = linha, é navio, valor 3

/* e ao contrario
if a soma da linha + coluna = 9, é navio, valor 3
*/

// copilot q fez
#include <stdio.h>

#define BOARD_SIZE 10
#define SHIP_VALUE 3
#define WATER_VALUE 0

int placeShip(int board[BOARD_SIZE][BOARD_SIZE], int startRow, int startCol, int dr, int dc, int size) {
    int row = startRow;
    int col = startCol;

    for (int i = 0; i < size; i++) {
        if (row < 0 || row >= BOARD_SIZE || col < 0 || col >= BOARD_SIZE) {
            return 0; // Fora do tabuleiro
        }
        if (board[row][col] == SHIP_VALUE) {
            return 0; // Sobreposição de navios
        }
        row += dr;
        col += dc;
    }

    row = startRow;
    col = startCol;
    for (int i = 0; i < size; i++) {
        board[row][col] = SHIP_VALUE;
        row += dr;
        col += dc;
    }

    return 1;
}

void printBoard(int board[BOARD_SIZE][BOARD_SIZE]) {
    printf("Tabuleiro 10x10:\n");
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int board[BOARD_SIZE][BOARD_SIZE] = {0};
    int shipSize = 3;
    int ok;

    ok = placeShip(board, 1, 1, 0, 1, shipSize); // Horizontal
    if (!ok) {
        printf("Erro: falha ao posicionar navio horizontal.\n");
        return 1;
    }

    ok = placeShip(board, 4, 6, 1, 0, shipSize); // Vertical
    if (!ok) {
        printf("Erro: falha ao posicionar navio vertical.\n");
        return 1;
    }

    ok = placeShip(board, 0, 2, 1, 1, shipSize); // Diagonal descendo à direita
    if (!ok) {
        printf("Erro: falha ao posicionar navio diagonal 1.\n");
        return 1;
    }

    ok = placeShip(board, 7, 0, -1, 1, shipSize); // Diagonal subindo à direita
    if (!ok) {
        printf("Erro: falha ao posicionar navio diagonal 2.\n");
        return 1;
    }

    printBoard(board);
    return 0;
}
