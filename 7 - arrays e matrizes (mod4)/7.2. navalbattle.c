// data: qui, 30/04/2026

/* Objetivos
- O programa deve receber as coordenadas iniciais (linha e coluna) de cada navio como entrada (pode ser definido diretamente no código).
- O programa deve validar se as coordenadas e o tamanho dos navios são válidos dentro dos limites do tabuleiro.
- O programa deve garantir que os navios não se sobreponham.
- O programa deve exibir o tabuleiro no console com os navios posicionados corretamente.


~~~ 1. Represente o Tabuleiro: 
- Utilize uma matriz (array bidimensional) para representar o tabuleiro do Batalha Naval. Neste nível novato, o tabuleiro terá um tamanho fixo 10x10. Inicialize todas as posições do tabuleiro com o valor 0, representando água.


~~~ 2. Posicione os Navios: 
Declare e inicialize dois vetores (arrays unidimensionais) para representar os navios. Cada navio ocupará um número fixo de posições no tabuleiro (defina esse tamanho, por exemplo, 3 posições). Um navio será posicionado horizontalmente e o outro verticalmente. Represente as posições ocupadas pelos navios na matriz do tabuleiro com o valor 3. Você deverá escolher as coordenadas iniciais de cada navio e garantir que eles estejam completamente dentro dos limites do tabuleiro e não se sobreponham. 

Dica: O posicionamento do navio pode ser feito copiando o valor 3 de cada posição do vetor do navio para as posições correspondentes na matriz do tabuleiro, de acordo com a orientação (horizontal ou vertical) do navio.


~~~ 3. Exiba o Tabuleiro: 
Utilize loops aninhados e o comando printf para exibir o tabuleiro no console. Mostre a matriz completa, com 0s representando água e 3s representando as partes dos navios. A saída deve ser clara e organizada, permitindo visualizar facilmente a posição dos navios. 

Dica: Imprima um espaço ou outro caractere separador entre os elementos da matriz para facilitar a visualização.

~~~ Simplificado:
- O tamanho do tabuleiro e dos navios é fixo (10x10).
- Os navios têm tamanho fixo igual a 3.
- As coordenadas dos navios são definidas diretamente no código, sem input do usuário.
- Não é necessário implementar a lógica do jogo (ataques, acertos, etc.) neste nível.
- A validação de sobreposição de navios pode ser simplificada.
*/

#include <stdio.h>

// Símbolos do jogo
#define AGUA 0
#define NAVIO 3
#define TIRO_AGUA 1
#define TIRO_NAIO 2

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[10][10], int mostrarNavios) {
    printf("\n   ");
    for (int l = 0; l < 10; l++) {
        printf("%d ", l);
    }
    printf("\n");
    
    for (int i = 0; i < 10; i++) {
        printf("%d  ", i);
        for (int j = 0; j < 10; j++) {
            int valor = tabuleiro[i][j];
            
            if (valor == AGUA) {
                printf(". ");
            } else if (valor == NAVIO) {
                if (mostrarNavios) {
                    printf("N ");
                } else {
                    printf(". ");
                }
            } else if (valor == TIRO_AGUA) {
                printf("O ");
            } else if (valor == TIRO_NAIO) {
                printf("X ");
            }
        }
        printf("\n");
    }
}

// Função para posicionar um navio
int posicionarNavio(int tabuleiro[10][10], int linha, int coluna, int tamanho, char orientacao) {
    // Verificar limites
    if (orientacao == 'H' || orientacao == 'h') {
        if (coluna + tamanho > 10) return 0; // Fora dos limites
        for (int j = coluna; j < coluna + tamanho; j++) {
            if (tabuleiro[linha][j] == NAVIO) return 0; // Sobreposição
        }
        for (int j = coluna; j < coluna + tamanho; j++) {
            tabuleiro[linha][j] = NAVIO;
        }
    } else { // Vertical
        if (linha + tamanho > 10) return 0; // Fora dos limites
        for (int i = linha; i < linha + tamanho; i++) {
            if (tabuleiro[i][coluna] == NAVIO) return 0; // Sobreposição
        }
        for (int i = linha; i < linha + tamanho; i++) {
            tabuleiro[i][coluna] = NAVIO;
        }
    }
    return 1; // Sucesso
}

// Função para fazer um tiro
int fazerTiro(int tabuleiro[10][10], int linha, int coluna) {
    if (tabuleiro[linha][coluna] == NAVIO) {
        tabuleiro[linha][coluna] = TIRO_NAIO;
        return 1; // Acertou
    } else if (tabuleiro[linha][coluna] == AGUA) {
        tabuleiro[linha][coluna] = TIRO_AGUA;
        return 0; // Errou
    }
    return -1; // Já disparou nessa posição
}

// Função para verificar se ainda há navios no tabuleiro
int aindaTemNavio(int tabuleiro[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (tabuleiro[i][j] == NAVIO) {
                return 1; // Ainda tem navio
            }
        }
    }
    return 0; // Todos os navios foram destruídos
}

int main() {
    // Criar tabuleiro 10x10 inicializado com 0 (água)
    int tabuleiro[10][10] = {0};
    
    printf("\n=== BATALHA NAVAL ===\n");
    printf("Posicione seus navios!\n\n");
    
    // Posicionar navios (definidos no código)
    // Navio 1: horizontal, tamanho 3, posição (2, 3)
    if (posicionarNavio(tabuleiro, 2, 3, 3, 'H')) {
        printf("Navio 1 posicionado (horizontal, tamanho 3)\n");
    }
    
    // Navio 2: vertical, tamanho 3, posição (5, 7)
    if (posicionarNavio(tabuleiro, 5, 7, 3, 'V')) {
        printf("Navio 2 posicionado (vertical, tamanho 3)\n");
    }
    
    // Navio 3: horizontal, tamanho 4, posição (7, 1)
    if (posicionarNavio(tabuleiro, 7, 1, 4, 'H')) {
        printf("Navio 3 posicionado (horizontal, tamanho 4)\n");
    }
    
    // Navio 4: vertical, tamanho 2, posição (1, 5)
    if (posicionarNavio(tabuleiro, 1, 5, 2, 'V')) {
        printf("Navio 4 posicionado (vertical, tamanho 2)\n");
    }
    
    // Mostrar tabuleiro VAZIO (sem navios)
    printf("\n--- Seu Campo ---\n");
    exibirTabuleiro(tabuleiro, 0);
    
    // Jogar!
    int acertos = 0;
    int totalNavios = 3 + 3 + 4 + 2; // Total de posições de navios
    int naviosRestantes = 4; // Total de navios
    
    printf("\n=== Hora de Atacar! ===\n");
    printf("Voce tem %d navios para destruir!\n", naviosRestantes);
    printf("Digite coordenadas (linha coluna) para atacar.\n");
    printf("Digite -1 -1 para sair.\n");
    
    while (1) {
        int linha, coluna;
        printf("\nDigite sua jogada (linha coluna): ");
        scanf("%d %d", &linha, &coluna);
        
        // Sair do jogo
        if (linha == -1 || coluna == -1) {
            break;
        }
        
        // Verificar limites
        if (linha < 0 || linha > 9 || coluna < 0 || coluna > 9) {
            printf("Coordenada inválida! Digite valores entre 0 e 9.\n");
            continue;
        }
        
        // Fazer o tiro
        int resultado = fazerTiro(tabuleiro, linha, coluna);
        
        if (resultado == 1) {
            printf("[X] ACERTOU! Navio atingido!\n");
            acertos++;
        } else if (resultado == 0) {
            printf("[O] AGUA! Voce errou.\n");
        } else {
            printf("[!] Voce ja disparou nessa posicao!\n");
        }
        
        // Mostrar tabuleiro (sem mostrar navios ocultos)
        printf("\n--- Campo de Batalha ---\n");
        exibirTabuleiro(tabuleiro, 0);
        
        // Verificar se ainda tem navios
        if (!aindaTemNavio(tabuleiro)) {
            printf("\n*** PARABENS! Voce venceu a batalha naval! ***\n");
            printf("Voce destruiu todos os %d navios!\n", naviosRestantes);
            break;
        }
    }
    
    printf("\n--- Tabuleiro Final ---\n");
    exibirTabuleiro(tabuleiro, 0);
    printf("\nFim de jogo! Obrigado por jogar!\n");
    
    return 0;
}