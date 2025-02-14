#include <stdio.h>

#define LENGTH 10

int main()
{
    printf("\n- exemplo 6: colocando o primeiro elemento na ultima posicao (duas versoes)\n\n");

    int vetor[LENGTH] = {92, 45, 13, 27, 72, 31, 54, 29, 3, 7};

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%4d", vetor[i]);
    }

    printf("\n");

    int temp = vetor[0];

    vetor[0] = vetor[LENGTH - 1];
    vetor[LENGTH - 1] = temp;

    printf("\n");

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%4d", vetor[i]);
    }

    printf("\n");

    return 0;
}