// data: a mesma, 23/04/2026, qui
#include <stdio.h>

int main() {
    int i = 0;
    printf("\nWHILE\n");
    while (i <= 10)
    {
        printf("%d\n", i);
        i++;
    }
    
    printf("\nDO-WHILE\n");
    int j = 0;
    do
    { 
        printf("%d\n", j);
        j++;
    } 
    while (j <= 10);

    printf("\nFOR\n");
    for (int k = 0; k <= 10; k++)
    {
        printf("%d\n", k);
    }

    return 0;
}