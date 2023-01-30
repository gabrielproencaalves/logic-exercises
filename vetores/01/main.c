/** 
 * Leia um vetor de 12 posições e em seguida ler também dois valores X e Y
 * quaisquer correspondentes a duas posições no vetor. Ao final seu programa
 * deverá escrever a soma dos valores encontrados nas respectivas posições X e Y.
 *
 **/


#include <stdio.h>

int main(void)
{
        int i, x, y, vetor[12];

        for (i = 0; i < 12; i++) {
                printf("vetor[%2i] = ", i);
                scanf("%i", &(vetor[i]));
        }

        printf("x = ");
        scanf("%i", &x);

        printf("y = ");
        scanf("%i", &y);

        printf("vetor[%i] + vetor[%i] = %i\n", x, y, vetor[x] + vetor[y]);

        return 0;
}
