#include <stdio.h>

#define LENGTH 10

int main()
{
    printf("\n- exemplo 8: colocar os dois maiores no fim (tres versoes)\n\n");

    int vetor[LENGTH] = {92, 45, 13, 27, 72, 31, 54, 29, 3, 7};

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%4d", vetor[i]);
    }

    printf("\n");

    int maior = 0;

    for (int i = 0; i < LENGTH; i++)
    {
        if (vetor[i] > vetor[maior])
        {
            maior = i;
        }
    }

    int menor = 0;

    if (maior == 0)
    {
        menor++;
    }

    for (int i = 0; i < LENGTH; i++)
    {
        if (i == maior)
            continue;

        if (vetor[i] > vetor[menor])
        {
            menor = i;
        }
    }

    int temp = vetor[maior];

    vetor[maior] = vetor[LENGTH - 1];
    vetor[LENGTH - 1] = temp;

    temp = vetor[menor];

    vetor[menor] = vetor[LENGTH - 2];
    vetor[LENGTH - 2] = temp;

    printf("\n");

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%4d", vetor[i]);
    }

    printf("\n");

    return 0;
}