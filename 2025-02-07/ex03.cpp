#include <stdio.h>

#define LENGTH 10

int main()
{
    int vetor[LENGTH] = {3, 6, 9, 0, 2, 8, 5, 1, 4, 7};

    // exemplo 3: encontrar o segundo menor elemento

    int first, second;

    for (int i = 0; i < LENGTH; i++)
    {
        if (vetor[i] < first)
        {
            second = first;
            first = vetor[i];
        }
        else if (vetor[i] < second)
        {
            second = vetor[i];
        }
    }

    printf("\n");
    printf("Resultado:\n");
    printf("  #1: %d\n", first);
    printf("  #2: %d\n", second);
    printf("\n");

    return 0;
}
