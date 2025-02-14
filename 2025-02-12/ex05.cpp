#include <stdio.h>

#define LENGTH 10

int main() {
    printf("\n- exemplo 5: trocando os dois primeiros elementos de lugar\n\n");

    int vetor[LENGTH] = {92, 45, 13, 27, 72, 31, 54, 29, 3, 7};

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%4d", vetor[i]);
    }

    printf("\n");

    int temp = vetor[0];

    vetor[0] = vetor[1];
    vetor[1] = temp;

    printf("\n");

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%4d", vetor[i]);
    }

    printf("\n");

    return 0;
}