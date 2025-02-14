#include <stdio.h>

#define LENGTH 10

int main()
{
    /*
     * parte I - Modificando a lista
     */

    {
        printf("\n- exemplo 1: zerando todas as posicoes da lista\n\n");

        int vetor[LENGTH] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

        for (int i = 0; i < LENGTH; i++)
        {
            printf("%4d", vetor[i]);
        }

        printf("\n");

        for (int i = 0; i < LENGTH; i++)
        {
            vetor[i] = 0;
        }

        printf("\n");

        for (int i = 0; i < LENGTH; i++)
        {
            printf("%4d", vetor[i]);
        }

        printf("\n");
    }

    {
        printf("\n- exemplo 2: zerando as posicoes pares\n\n");

        int vetor[LENGTH] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

        for (int i = 0; i < LENGTH; i++)
        {
            printf("%4d", vetor[i]);
        }

        printf("\n");

        for (int i = 0; i < LENGTH; i += 2)
        {
            vetor[i] = 0;
        }

        printf("\n");

        for (int i = 0; i < LENGTH; i++)
        {
            printf("%4d", vetor[i]);
        }

        printf("\n");
    }

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
    }

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
                if (index == -1) {
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
    }
}
