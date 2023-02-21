#include <stdio.h>
#define MAXIMO 100

int main(void)
{
    int i, j;
    char c, espacos,
         input[MAXIMO],
         output[MAXIMO];

    for (i = 0; i < MAXIMO-1 && (c=getchar()) != '\n' && c != EOF; ++i)
        input[i] = c;
    input[i] = '\0';

    espacos = j = 0;
    for (i = 0; input[i] == ' '; ++i);
    for (; input[i] != '\0'; ++i) {
        if (input[i] == ' ')
            ++espacos;
        else
            espacos = 0;

        if (espacos <= 1)
            output[j++] = input[i];
    }
    for (; output[j] == ' ' || output[j] == '\0'; --j);
    output[++j] = '\0';

    printf("Original: \"%s\"\n", input);
    printf("Formatada: \"%s\"\n", output);

    return 0;
}
