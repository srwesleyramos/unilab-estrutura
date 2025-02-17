#include <stdio.h>

#define LENGTH 10

int main()
{
    printf("\n- exemplo 6: trocar as duas metades\n\n");

    int vetor[LENGTH] = {92, 45, 13, 27, 72, 31, 54, 29, 3, 7};

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%4d", vetor[i]);
    }

    printf("\n");

    int size = LENGTH / 2;
    int start = size;

    if (LENGTH % 2 == 1)
        start++;

    for (int i = 0, j = start; i < size; i++, j++)
    {
        int temp = vetor[i];

        vetor[i] = vetor[j];
        vetor[j] = temp;
    }

    printf("\n");

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%4d", vetor[i]);
    }

    printf("\n");

    return 0;
}