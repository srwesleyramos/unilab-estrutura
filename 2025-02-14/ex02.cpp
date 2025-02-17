#include <stdio.h>

#define LENGTH 10

int main()
{
    printf("\n- exemplo 2: primeiro impar no inicio\n\n");

    int vetor[LENGTH] = {92, 45, 13, 27, 72, 31, 54, 29, 3, 7};

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%4d", vetor[i]);
    }

    printf("\n");

    for (int i = 0; i < LENGTH; i++)
    {
        if (vetor[i] % 2 == 1) {
            int temp = vetor[0];

            vetor[0] = vetor[i];
            vetor[i] = temp;
            break;
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