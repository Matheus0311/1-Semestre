#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
    float A[20], B[20], C[10];
    int i;
    setlocale(LC_ALL, "Portuguese");
    for (i=0; i<20; i++)
    {
        printf("\nInforme o %d� n�mero real para A: ", i+1);
            scanf("%g", &A[i]);
    }
    for (i=0; i<20; i++)
    {
        printf("\nInforme o %d� n�mero real para B: ", i+1);
            scanf("%g", &B[i]);
    }
    for (i=0; i<10; i++)
    {
        C[i]=(A[i] - B[i]);
    }
    system("cls");
    for (i=0; i<10; i++)
        printf("\nA subtra��o de %g com %g �: %g", A[i], B[i], C[i]);
}
