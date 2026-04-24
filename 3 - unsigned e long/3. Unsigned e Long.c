// data: 12/02/2026, qui
#include <stdio.h>

int main () { 
    char produtoA[30] = "A";
    char produtoB[30] = "B";
    
    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;
    
    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueminimoA = 500;
    unsigned int estoqueminimoB = 2500;

    double valortotalA = valorA * estoqueA;
    double valortotalB = valorB * estoqueB;

    printf("Produto: %s\n", produtoA);
    printf("Custo: %.2f\n", valorA);
    printf("Estoque: %u\n", estoqueA);
    printf("Valor total do estoque: %d\n", valortotalA);

    printf("Produto: %s\n", produtoB);
    printf("Custo: %.2f\n", valorB);
    printf("Estoque: %u\n", estoqueB);
    printf("Valor total do estoque: %d\n", valortotalB);

}