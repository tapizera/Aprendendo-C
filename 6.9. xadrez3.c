// data: 26/04/2026, dom

/* O que você vai fazer

    Recursividade: Substitua os loops simples que controlam os movimentos da Torre, Bispo e Rainha por funções recursivas. Cada função recursiva deverá simular o movimento da respectiva peça, imprimindo a direção correta a cada casa.
     
    Loops Complexos para o Cavalo: Aprimore a movimentação do Cavalo, utilizando loops aninhados com múltiplas variáveis e/ou condições. Você pode usar continue e break para controlar o fluxo do loop de forma mais precisa. O movimento do Cavalo agora será para cima e para a direita, em "L" (duas casas para cima e uma para a direita).
     
    Bispo com Loops Aninhados: O Bispo deve ser implementado com recursividade, e também com loops aninhados, utilizando o loop mais externo para o movimento vertical, e o mais interno para o movimento horizontal.

---Requisitos funcionais

    Entrada de Dados: Os valores para o número de casas a serem movidas (para recursão) e as condições dos loops (para o Cavalo) devem ser definidos diretamente no código, como variáveis ou constantes.
     
    Recursividade (Torre, Bispo e Rainha): Implemente funções recursivas para simular o movimento de cada peça, substituindo os loops originais.
     
    Loops Complexos (Cavalo): Utilize loops aninhados com múltiplas variáveis e/ou condições para simular o movimento do Cavalo em "L" (duas casas para cima e uma para a direita).
     
    Loops Aninhados (Bispo): Utilize loops aninhados para o bispo, sendo o loop mais externo o vertical, e o mais interno o horizontal.
     
    Saída de Dados: O programa deverá imprimir no console, de forma clara e organizada, a direção do movimento a cada casa percorrida por cada peça. Utilize o comando printf para exibir as informações. As saídas devem seguir o padrão: printf("Cima\n");, printf("Baixo\n");, printf("Esquerda\n");, printf("Direita\n");. Utilize linhas em branco para separar a saída de cada peça.
*/
#include <stdio.h>
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

int main() {
    moverTorre(5); // Simula o movimento da Torre cinco casas para a direita
    return 0;
}
