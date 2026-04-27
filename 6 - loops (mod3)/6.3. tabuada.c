// data: a mesma, 23/04/2026, qui
#include <stdio.h>

int main() {
    int user;
    printf("Digite um numero para tabuar: ");
    scanf("%d", &user);
    for (int j = 0; j <= 10; j++) 
    {
        printf("%d x %d = %d\n", user, j, user*j); 
        // ou direto: printf("%d x %d = %d\n", user, j, user * j);
    }
   
}