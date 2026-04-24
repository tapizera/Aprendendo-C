// data: a mesma, 23/04/2026, qui
#include <stdio.h>

int main() {
    int user;
    printf("\nDigite um numero para tabuar: ");
    scanf("%d", &user);

    for (int j = 0; j <= 10; j++) 
    {
        int ixj = user * j;
        printf("%d x %d = %d\n", user, j, ixj); 
        // ou direto: printf("%d x %d = %d\n", user, j, user * j);
    }
   
}

/* fazer 
{
    para j até 10
        i x 
        printf("%d x %d", user, j);
        j++;
} enquanto (j == 10);

*/