#include <stdio.h>

#define LENGTH 10

int main()
{
    printf("\n- exemplo 3: o maior impar no fim\n\n");

    int vetor[LENGTH] = {92, 45, 13, 27, 72, 31, 54, 93, 3, 7};

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%4d", vetor[i]);
    }

    printf("\n");

    int index = -1;

    for (int i = 0; i < LENGTH; i++)
    {
        if (vetor[i] % 2 == 0)
            continue;

        if (index == -1 || vetor[i] > vetor[index])
        {
            index = i;
        }
    }

    int temp = vetor[index];

    vetor[index] = vetor[LENGTH - 1];
    vetor[LENGTH - 1] = temp;

    printf("\n");

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%4d", vetor[i]);
    }

    printf("\n");

    return 0;
}