#include <stdio.h>

#define LENGTH 10

int main()
{
    printf("\n- exemplo 7: inverter elementos das posicoes impares e pares\n\n");

    int vetor[LENGTH] = {92, 45, 13, 27, 72, 31, 54, 29, 3, 7};

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%4d", vetor[i]);
    }

    printf("\n");

    for (int i = 1; i < LENGTH; i += 2)
    {
        int temp = vetor[i];

        vetor[i] = vetor[i - 1];
        vetor[i - 1] = temp;
    }

    printf("\n");

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%4d", vetor[i]);
    }

    printf("\n");

    return 0;
}