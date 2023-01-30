/**
 * leia um vetor de 40 posições e acumule os
 * valores do primeiro elemento no segundo,
 * deste no terceiro e assim por diante. Ao
 * final, escreva o vetor obtido.
 **/

#include <stdio.h>

int main(void)
{
    int i, vetor[40];

    for (i = 0; i < 40; i++) {
        printf("vetor[%2i] = ", i);
        scanf("%i", &(vetor[i]));
    }

    printf("vetor[ 0] = %i\n", vetor[0]);

    for (i = 1; i < 40; i++) {
        vetor[i] += vetor[i-1];
        printf("vetor[%2i] = %i", i, vetor[i]);
    }

    return 0;
}
