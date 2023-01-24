/**
 * Leia dois vetores de 20 posições e calcule um
 * terceiro vetor contendo, nas posições pares os
 * valores do primeiro e nas posições impares os
 * valores do segundo.
 **/

#include <stdio.h>

int main(void)
{
    int x[20], y[20], z[20];

    for (int i = 0; i < 20; i++) {
        printf("x[%2i] = ", i);
        scanf("%i", &(x[i]));
    }

    putchar('\n');

    for (int i = 0; i < 20; i++) {
        printf("y[%2i] = ", i);
        scanf("%i", &(y[i]));
    }

    for (int i = 0; i < 20; i++) {
        if ((i % 2) == 0 )
            z[i] = x[i];
        else
            z[i] = y[i];
        
        printf("z[%2i] = %i\n", i, z[i]);
    }
}
