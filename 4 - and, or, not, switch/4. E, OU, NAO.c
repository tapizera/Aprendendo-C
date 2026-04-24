// data: 20/02/2026, sex, 12:33
#include <stdio.h>
#include <stdlib.h>

int main () {
// E = && (2 E comercial)
//      Sintaxe: expressao1 && expressao2
    int a = 5;
    int b = 10;
    if (a > 0 && b > 0) {
      printf("Ambos são positivos\n");
    }

// OU = || (2 módulos)
//      Sintaxe: expressao1 || expressao2
    int c = 5;
    int d = -10;
    if (c > 0 || d > 0) {
        printf("Pelo menos um dos números é positivo\n");
    }

// NÃO = ! (exclamação) -> inverte o valor lógico de uma expressão. Se a expressão for verdadeira, ele retorna falso, e se a expressão for falsa, ele retorna verdadeiro.
//      Sintaxe: !expressao
    int a = -5;
    // se a não for maior que 0 = não é positivo
    if (!(a > 0)) {
        printf("a não é um número positivo\n");
    }


// IMPORTANTE!!!! ---> TABELA DO &&
/* se qualquer um for 0 (falso) vai dar 0 (falso)
 A	   B    A && B
 1	   1	  1
 1	   0	  0
 0	   1	  0
 0	   0	  0
*/

// IMPORTANTE!!!! ---> TABELA DO ||
/* se qualquer um for 1 (true) vai dar 1 (true)
 A	   B    A || B
 1	   1	  1
 1	   0	  1
 0	   1	  1
 0	   0	  0
*/

// IMPORTANTE!!!! ---> TABELA DO !
/* inverte
 A	  !A
 1	   0  
 0	   1	  	 
*/
    return 0;
}
