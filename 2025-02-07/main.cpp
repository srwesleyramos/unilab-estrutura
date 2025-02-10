#include <stdio.h>

#define LENGTH 10

int V[LENGTH] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int G[LENGTH] = {4, 7, 1, 9, 2, 5, 0, 8, 3, 6};
int K[LENGTH] = {3, 6, 9, 0, 2, 8, 5, 1, 4, 7};

int main()
{
    int *vetor = V;

    // exemplo 3: encontrar o segundo menor elemento
    {
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
    }

    // exemplo 4: encontrar o terceiro menor elemento
    {
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
    }

    // exemplo 5: encontrar o segundo menor elemento ímpar
    {
        int first, second;

        for (int i = 0; i < LENGTH; i++)
        {
            if (vetor[i] % 2 == 1)
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
        }

        printf("\n");
        printf("Resultado:\n");
        printf("  #1: %d\n", first);
        printf("  #2: %d\n", second);
        printf("\n");
    }

    return 0;
}
