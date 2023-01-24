/**
 * Leia um vetor de 40 posições. Contar e
 * escrever quantos valores pares ele
 * possui.
 *
 **/

#include <stdio.h>

int main(void)
{
        int vetor[40];

        for (int i = 0; i < 40; i++) {
                printf("vetor[%2i] = ", i);
                scanf("%i", &(vetor[i]));
        }

        for (int i = 0; i < 39; i++) {
                int count = 1;

                for (int j = 0; j < i; j++) {
                        if (vetor[j] == vetor[i]) {
                                count++;
                        }
                }

                if (count != 1) {
                        continue;
                }

                for (int j = i + 1; j < 40; j++) {
                        if (vetor[i] == vetor[j]) {
                                count++;
                        }
                }

                if ((count/2) > 1) {
                        printf("Número %2i: %2i pares\n", vetor[i], count/2);
                        continue;
                }
                else if ((count/2) == 1) {
                        printf("Número %2i: %2i par\n", vetor[i], count/2);
                }
        }

        return 0;
}
