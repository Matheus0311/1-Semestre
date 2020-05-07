#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
    int A[15], B[15], C[30], i, j=1;
    setlocale(LC_ALL, "Portuguese");
    for (i=0; i<15; i++)
    {
        printf("\nInforme o %dº número inteiro para A: ", j);
            scanf("%d", &A[i]);
        j++;
    }
    j=1;
    for (i=0; i<15; i++)
    {
        printf("\nInforme o %dº número inteiro para B: ", j);
            scanf("%d", &B[i]);
        j++;
    }
    for (i=0; i<15; i++)
    {
        C[i] = (A[i]);
    }
    for (i=15; i<30; i++)
    {
        C[i] = (B[i]);
    }
    system("cls");
    j=1;
    for (i=0; i<30; i++)
    {
        printf("\nO %dº número para C é: %d", j, C[i]);
        j++;
    }
}
