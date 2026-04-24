// data: 10/02/2026, ter
#include <stdio.h> 

int main() {
//   --- Tipos de Variáveis ---

    int idade = 17;
    char nome[20]; //string de até 20 digitos (caracteres)
    float altura = 1.84;
    double dinheiro = 1234.99;


/*    --- Formatos de variável ---

    %d: inteiro no formato decimal. 
    %i: Equivalente a %d.
    %f: número flutuante padrão.
    %e: número flutuante notação científica.
    %c: único caractere.
    %s: string (cadeia de caracteres).

*/
//         ----- Input -----

    // idade = input('Sua idade: ')
    printf("Sua idade: ");
    scanf("%d", &idade); // tem q ser " aspas duplas

    // print(f'Sua idade é: {idade}')
    printf("Sua idade é: %d\n", idade);
}