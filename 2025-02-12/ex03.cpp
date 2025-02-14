#include <stdio.h>

#define LENGTH 10

int main()
{
    printf("\n- exemplo 3: duplicando os elementos impares da lista\n\n");

    int vetor[LENGTH] = {92, 45, 13, 27, 72, 31, 54, 29, 3, 7};

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%4d", vetor[i]);
    }

    printf("\n");

    for (int i = 1; i < LENGTH; i++)
    {
        if (vetor[i] % 2 == 1)
        {
            vetor[i] *= 2;
        }
    }

    printf("\n");

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%4d", vetor[i]);
    }

    printf("\n");

    return 0;
}
