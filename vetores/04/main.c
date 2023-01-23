/**
 * Leia um vetor de 20 posições e em seguida um
 * valor X qualquer. Seu programa devera fazer
 * uma busca do valor de X no vetor lido e
 * informar a posição em que foi encontrado ou
 * se não foi encontrado.
 **/

#include <stdio.h>

int main(void)
{
        int x, vetor[20];

        for (int i = 0; i < 20; i++) {
                printf("vetor[%2i] = ", i);
                scanf("%i", &(vetor[i]));
        }
        
        printf("X = ");
        scanf("%i", &x);

        for (int i = 0; i < 20; i++) {
                if (vetor[i] == x) {
                    printf("Encontrado na %iª posição\n", i + 1);
                    return 0;
                }
        }
        puts("Não encontrado");

        return 1;
}
