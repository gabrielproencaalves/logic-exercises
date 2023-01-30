/**
 * Leia um vetor de 40 posições e atribua o valor
 * 0 para todos os elementos que possuírem
 * valores negativos.
 *
 **/

#include <stdio.h>

int main(void)
{
        int i, vetor[40];

        for (i = 0; i < 40; i++) {
                int input;
                printf("vetor[%2i] = ", i);
                scanf("%i", &input);
                if (input < 0) {
                        input = 0;
                }
                vetor[i] = input;
        }
        puts("");
        for(i = 0; i < 40; i++) {
                printf("vetor[%2i] = %i\n", i, vetor[i]);
        }

}
