// data: qua, 29/04/2026 e qui, 30/04/2026

/*
> Array (vetores) = armazena uma coleção de elementos do mesmo tipo em locais de memória lado a lado. 
    - Arrays podem ter uma ou mais dimensões. Um array unidimensional é chamado de vetor. 
    - Um vetor, portanto, é uma sequência ordenada de elementos, onde cada elemento pode ser acessado diretamente por sua posição na sequência, chamada de índice.
    - Otimiza o desempenho do processador, especialmente o uso da memória cache.

> Matrizes (arrays bidimensionais) = possui linhas e colunas. 
    - Cada elemento em uma matriz é acessado por dois índices: um para a linha e outro para a coluna.
    - São utilizadas para representar tabelas, imagens, gráficos e outras formas de dados estruturados.

    assim como arrays, tem q ter:
    - mesmo tipo
    - tamanho fixo

> Aplicações:
    - Ciência de dados e estatística
    - Desenvolvimento de jogos
    - Processamento de imagens
    - Simulações científicas
    - Álgebra linear e computações científicas
*/

#include <stdio.h>
int main() {
    printf("\n-- Arrays e Matrizes --\n");
    int array[4] = {0,1,2,3}; // vetor unidimensional
    printf("%d\n", array[1]);

    char letras[4] = {'a', 'b', 'c', 'd'}; // vetor de caracteres
    printf("%c\n", letras[2]);

    char *nomes[] = {"La", "Ele", "da", "Silva"};
    printf("char *nomes[]\n");
    for(int i = 0; i < 4; i++) {
        printf("%s ", nomes[i]);
    }
    printf("\n");

    int matriz[3][3] = { // array bidimensional
        {1,2,3}, // index [0][0], [0][1], [0][2]
        {4,5,6}, // index [1][0], [1][1], [1][2]
        {7,8,9}  // index [2][0], [2][1], [2][2]
    };
    printf("%d\n", matriz[1][2]);

    // Codetime

    int index;
    char * Alonos[3][3] = {
        {"Nome: Alono1", "Idade: 17", "Sala: 3B"},
        {"Nome: Alono2", "Idade: 15", "Sala: 1C"},
        {"Nome: Alono3", "Idade: 16", "Sala: 2A"}
    };

    printf("\n-- Codetime! ~ Alonos --\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%s\n", Alonos[i][j]);
        }
        printf("\n");
    }
    return 0;
}

 