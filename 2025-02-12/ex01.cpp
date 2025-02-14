#include <stdio.h>

#define LENGTH 10

int main()
{
    printf("\n- exemplo 1: zerando todas as posicoes da lista\n\n");

    int vetor[LENGTH] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%4d", vetor[i]);
    }

    printf("\n");

    for (int i = 0; i < LENGTH; i++)
    {
        vetor[i] = 0;
    }

    printf("\n");

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%4d", vetor[i]);
    }

    printf("\n");

    return 0;
}
