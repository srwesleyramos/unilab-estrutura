#include <stdio.h>

#define LENGTH 10

int main()
{
   /*
    * parte II - Trocando as coisas de lugar
    */

   {
      printf("\n- exemplo 5:  trocando os dois primeiros elementos de lugar\n\n");

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
   }

   {
      printf("\n- exemplo 6:  colocando o primeiro elemento na ultima posicao\n\n");

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
   }

   {
      printf("\n- exemplo 7:  colocando o maior elemento na ultima posicao\n\n");

      int vetor[LENGTH] = {92, 45, 13, 27, 72, 31, 54, 29, 3, 7};

      for (int i = 0; i < LENGTH; i++)
      {
         printf("%4d", vetor[i]);
      }

      printf("\n");

      int index = 0;

      for (int i = 0; i < LENGTH; i++)
      {
         if (vetor[i] > vetor[index])
         {
            index = i;
         }
      }

      int temp = vetor[index];

      vetor[index] = vetor[LENGTH - 1];
      vetor[LENGTH - 1] = temp;

      printf("\n");

      for (int i = 0; i < LENGTH; i++)
      {
         printf("%4d", vetor[i]);
      }

      printf("\n");
   }

   {
      printf("\n- exemplo 8:  colocar os dois maiores no fim\n\n");

      int vetor[LENGTH] = {92, 45, 13, 27, 72, 31, 54, 29, 3, 7};

      for (int i = 0; i < LENGTH; i++)
      {
         printf("%4d", vetor[i]);
      }

      printf("\n");

      int maior = 0, menor = 1;

      if (vetor[1] > vetor[0])
      {
         maior = 1;
         menor = 0;
      }

      for (int i = 1; i < LENGTH; i++)
      {
         if (vetor[i] > vetor[maior])
         {
            menor = maior;
            maior = i;
         }
         else if (vetor[i] > vetor[menor])
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
   }
}