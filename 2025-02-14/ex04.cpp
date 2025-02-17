#include <stdio.h>

#define LENGTH 10

int main()
{
    printf("\n- exemplo 4:  trocar o maior e o menor de lugar\n\n");

    int vetor[LENGTH] = {92, 45, 13, 27, 72, 31, 54, 29, 3, 7};

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%4d", vetor[i]);
    }

    printf("\n");

    int maior = 0, menor = 0;

    for (int i = 0; i < LENGTH; i++)
    {
        if (vetor[i] > vetor[maior])
        {
            maior = i;
        }
        else if (vetor[i] < vetor[menor])
        {
            menor = i;
        }
    }

    int temp = vetor[maior];

    vetor[maior] = vetor[menor];
    vetor[menor] = temp;

    printf("\n");

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%4d", vetor[i]);
    }

    printf("\n");

    return 0;
}