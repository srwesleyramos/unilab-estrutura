#include <stdio.h>

#define LENGTH 10

int main()
{
    printf("\n- exemplo 5: inverter a ordem da lista\n\n");

    int vetor[LENGTH] = {92, 45, 13, 27, 72, 31, 54, 29, 3, 7};

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%4d", vetor[i]);
    }

    printf("\n");

    int aux, temp;

    for (int i = 0; i < LENGTH; i++)
    {
        // checando para lista par

        if (i == aux)
            break;

        aux = LENGTH - 1 - i;

        // checando para lista impar
        if (i == aux)
            break;

        temp = vetor[i];

        vetor[i] = vetor[aux];
        vetor[aux] = temp;
    }

    printf("\n");

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%4d", vetor[i]);
    }

    printf("\n");

    return 0;
}