// data: 13/02/2026, sex
#include <stdio.h>

int main ( ) {
    // variaveis 
    float temperatura, umidade;
    unsigned int estoque, estoque_min;

    // definindo as variaveis
    printf("temperatura: \n");
    scanf("%.2f", &temperatura);
    printf("umidade: \n");
    scanf("%.2f", &umidade);
    printf("estoque: \n");
    scanf("%u", &estoque);

    // condições de temp
    if (temperatura >= 30) {
        printf("tá quente");
    }
    else if (umidade >= 50) {
        printf("alerta: muito quente");
    }
    else if (temperatura <= 20) {
        printf("tá frio");
    }
    else if (umidade <= 0) {
        printf("alerta: muito frio");
    }
    else {
        printf("tá ok");
    }

    // condições de umidade
    if (umidade >= 50) {
        printf("tá quente");
    }
    else if (umidade >= 75) {
        printf("alerta: muito quente!");
    }
    else if (umidade <= 25) {
        printf("tá frio");
    }
    else if (umidade <= 0) {
        printf("alerta: muito frio");
    }
    else {
        printf("tá ok");
    }

    // condições de estoque
    if (estoque >= estoque_min) {
        printf("estoque ok");
    }
    else if (estoque < 0) {
        printf("estoque acabou");
    }
    else {
        printf("estoque acabando");
    }

    return 0;
}