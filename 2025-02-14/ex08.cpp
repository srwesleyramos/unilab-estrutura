#include <stdio.h>

#define LENGTH 10

int main()
{
    printf("\n- exemplo 8: inverter a ordem dos elementos nas posicoes impares\n\n");

    int vetor[LENGTH] = {92, 45, 13, 27, 72, 31, 54, 29, 3, 7};

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%4d", vetor[i]);
    }

    printf("\n");

    int start = LENGTH - 1;

    if (LENGTH % 2 == 1)
    {
        start--;
    }

    for (int i = 1, j = start; i < j; i += 2, j -= 2)
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