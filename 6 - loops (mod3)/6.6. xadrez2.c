// data: 26/04/2026, dom
// qual a necessidade de fazer um xadrez cara??? E AINDA MAIS EM C????

/* Objetivo
    Entrada de Dados: Os valores para o número de casas a serem movidas (duas para baixo, uma para a esquerda) devem ser definidos no código como variáveis ou constantes.
 
    Lógica de Movimentação: O programa deverá implementar a lógica específica do movimento em "L" do Cavalo usando loops aninhados (um loop for e um loop while ou do-while).
 
    Saída de Dados: O programa deverá imprimir no console a direção de cada etapa do movimento do Cavalo 
        ("Baixo", "Baixo", "Esquerda"), utilizando o comando printf. 
    Para as outras peças as saídas devem seguir o padrão: 
        printf("Cima\n");, printf("Baixo\n");, printf("Esquerda\n");, printf("Direita\n");. 
    Separe o movimento do Cavalo dos movimentos anteriores com uma linha em branco.
*/

// prof mostrou só isso
#include <stdio.h>
int main() {
    int movimentoCompleto = 1; 
    // Flag para controlar o movimento completo em 'L'

    while (movimentoCompleto)
        { 
            for (int i = 0; i < 2; i++) 
            {
                printf("Cima\n");
            }
            printf("Direita\n");
        }
    return 0;
}
