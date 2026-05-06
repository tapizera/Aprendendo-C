// data: qua, 06/05/2026
// finalmente acabou... ou não né, tô botando aq pelo gitub msm já q a fonte pipocou e aí quando voltar eu faço pelo pc, mas enquanto isso, taí o objeito final em C, vamo pra Nuvem!!

/* Tudo isso tá no último cap de C no Sava...

O que você vai fazer

Você deve modificar o seu programa em C para:
 

    Definir o Tabuleiro: Mantenha o tabuleiro 10x10 que você criou no nível anterior. Ele servirá como base para visualizar as áreas de efeito das habilidades.
     
    Criar Matrizes de Habilidade: Crie três matrizes separadas, cada uma representando a área de efeito de uma habilidade especial:
     
        Cone: Uma matriz que represente uma área em forma de cone, com o ponto de origem no topo e expandindo-se em direção à base. Imagine um cone apontando para baixo. A matriz deve representar essa forma, com o ponto de origem (o topo do cone) na parte superior e a área se expandindo para baixo.
         
        Cruz: Uma matriz que represente uma área em forma de cruz, com o ponto de origem no centro. 
         
        Octaedro: Uma matriz que represente a vista frontal de um octaedro (imagine como se estivesse olhando diretamente para ele), resultando em um formato que se assemelha a um losango, com o ponto de origem no centro.
         
        As matrizes de habilidade devem indicar quais posições são afetadas pela habilidade com o valor 1, e quais não são afetadas com o valor 0. Defina um tamanho razoável para as matrizes de habilidade (por exemplo, 5x5 ou 7x7).
         
    Integrar Habilidades ao Tabuleiro:
     
        Defina um ponto de origem para cada habilidade no tabuleiro (coordenadas linha e coluna). Este ponto de origem será o centro da habilidade, a partir do qual a área de efeito será calculada.
         
        Crie a lógica para sobrepor a matriz de habilidade ao tabuleiro, centrando a matriz de habilidade no ponto de origem definido.
         
        As posições do tabuleiro que estiverem dentro da área de efeito da habilidade (valor 1 na matriz de habilidade) devem ser marcadas visualmente. Utilize um valor diferente de 0 e 3 para representar as posições afetadas pela habilidade (por exemplo, o valor 5).
         
    Exibir o Tabuleiro com Habilidade: Utilize loops aninhados e o comando printf para exibir o tabuleiro no console, mostrando as áreas afetadas pelas habilidades. Utilize caracteres diferentes para representar:
     
        Água (0)
         
        Navio (3)
         
        Área afetada pela habilidade (5)
         
    Utilizar Condicionais: As matrizes de habilidades devem ser construídas de forma dinâmica, utilizando condicionais dentro de loops aninhados. A sobreposição das habilidades no tabuleiro também deve utilizar condicionais para garantir que a área de efeito permaneça dentro dos limites do tabuleiro.

 

Exemplo de saída de habilidade em cone:

0 0 3 0 0

0 3 3 3 0 

3 3 3 3 3

 

 

Exemplo de saída de habilidade em cruz:

0 0 3 0 0 

3 3 3 3 3 

0 0 3 0 0

 

 

Exemplo de saída de habilidade em octaedro:

0 0 3 0 0 

0 3 3 3 0 

0 0 3 0 0 

 

Requisitos funcionais

    O programa deve criar as matrizes de efeito para as habilidades Cone, Cruz e Octaedro.
     
    As matrizes de habilidade devem utilizar os valores 0 e 1 para indicar as áreas não afetadas e afetadas, respectivamente.
     
    O programa deve permitir definir um ponto de origem para cada habilidade no tabuleiro.
    O programa deve sobrepor as matrizes de habilidade ao tabuleiro, marcando as áreas afetadas.
     
    A saída do programa deve exibir o tabuleiro com os navios e as áreas de efeito das habilidades, utilizando diferentes caracteres para cada elemento.
     
    A construção das matrizes de habilidade e a sobreposição no tabuleiro devem obrigatoriamente utilizar estruturas de repetição aninhadas e condicionais.

*/

