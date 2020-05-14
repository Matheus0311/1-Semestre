#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int A[15], i, j=0;
    for (i=0; i<15; i++)
    {
        printf("\nInforme o %dº número inteiro: ",i+1);
            scanf("%d", &A[i]);
    }
    for (i=0; i<15; i++)
    {
        if (A[i] == 10)
        {
            j++;
        }
    }

    printf("\nO total de vezes que o número 10 foi inserido foi de: %d veze(s).\n", j);
}
