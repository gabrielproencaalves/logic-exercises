/**
 * Declare um vetor de 10 posições e o preencha
 * com os 10 primeiros números impares e o escreva.
 *
 **/

#include <stdio.h>

int main(void)
{
        int i, vetor[10];

        for (i = 0; i < 10; i++) {
                if (i == 0)
                        vetor[0] = 1;
                else
                        vetor[i] = vetor[i-1] + 2;
                printf("vetor[%i] = %i\n", i, vetor[i]);
        }
        
        return 0;
}
