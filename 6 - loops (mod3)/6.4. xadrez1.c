// data: a mesma, 23/04/2026, qui
// qual a necessidade de fazer um xadrez cara??? E AINDA MAIS EM C????

/* Objetivo
    Torre: Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita.
     
    Bispo: Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
     
    Rainha: Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.
*/

// prof mostrou só isso
#include <stdio.h>
int main () {
    // Mover a Torre 5 casa p direita
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    return 0;
}