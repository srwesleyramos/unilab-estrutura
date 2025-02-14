#include <stdio.h>

#define LENGTH 10

int main()
{
    printf("\n- exemplo 7: colocando o maior elemento na ultima posicao (duas versoes)\n\n");

    int vetor[LENGTH] = {45, 13, 27, 72, 92, 31, 54, 29, 3, 7};

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%4d", vetor[i]);
    }

    printf("\n");

    int index = 0;

    for (int i = 0; i < LENGTH; i++)
    {
        if (vetor[i] > vetor[index])
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