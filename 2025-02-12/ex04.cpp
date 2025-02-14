#include <stdio.h>

#define LENGTH 10

int main()
{
    printf("\n- exemplo 4: zerando as duplicatas do numero k\n\n");

    int vetor[LENGTH] = {92, 3, 13, 27, 3, 31, 54, 29, 3, 3};
    int k = 3, index = -1;

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%4d", vetor[i]);
    }

    printf("\n");

    for (int i = 0; i < LENGTH; i++)
    {
        if (vetor[i] == k)
        {
            if (index == -1)
            {
                index = i;
                continue;
            }

            vetor[i] = 0;
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
