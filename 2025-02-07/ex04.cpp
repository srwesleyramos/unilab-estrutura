#include <stdio.h>

#define LENGTH 10

int main()
{
    int vetor[LENGTH] = {3, 6, 9, 0, 2, 8, 5, 1, 4, 7};

    // exemplo 4: encontrar o terceiro menor elemento

    int first, second, third;

    for (int i = 0; i < LENGTH; i++)
    {
        if (vetor[i] < first)
        {
            third = second;
            second = first;
            first = vetor[i];
        }
        else if (vetor[i] < second)
        {
            third = second;
            second = vetor[i];
        }
        else if (vetor[i] < third)
        {
            third = vetor[i];
        }
    }

    printf("\n");
    printf("Resultado:\n");
    printf("  #1: %d\n", first);
    printf("  #2: %d\n", second);
    printf("  #3: %d\n", third);
    printf("\n");

    return 0;
}
