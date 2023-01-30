/**
 * Leia um vetor de 16 posições e troque os 8
 * primeiros valores pelos 8 últimos e vice-e-versa.
 * Escreva ao final o vetor obtido.
 *
 **/

#include <stdio.h>

int main(void)
{
        int i, vetor[16];

        for (i = 0; i < 16; i++) {
                printf("vetor[%i] = ", i);
                scanf("%i", &(vetor[i]));
        }

        for (i = 0; i < 8; i++) {
                vetor[i]   = vetor[i] ^ vetor[i+8];
                vetor[i+8] = vetor[i] ^ vetor[i+8];
                vetor[i]   = vetor[i] ^ vetor[i+8];
        }

        for (i = 0; i < 16; i++)
            printf("vetor[%i] = %i\n", i, vetor[i]);
        return 0;
}
