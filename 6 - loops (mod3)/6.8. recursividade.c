// data: 26/04/2026, qui

/* Oq é? 
   - Função que se chama a si mesma 
   - Pode substituir loops
   - Dividir problemas complexos
*/

#include <stdio.h>
void recursividade(int n) {
    if (n > 0) {
        printf("%d\n", n);
        recursividade(n - 1); // Chamada recursiva
    }
}

int main() {
    int numero = 5;
    printf("Contagem regressiva:\n");
    recursividade(numero); // Inicia a recursividade
    printf("\nFim da contagem.\n");
    return 0;
}