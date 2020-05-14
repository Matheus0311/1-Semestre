#include<stdlib.h>
#include<stdio.h>
#include <locale.h>
#define TAM 5
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    char A[TAM], B[TAM];
    int i, j=TAM-1, aux;
    for (i=0; i<TAM; i++)
    {
        printf("\nInforme a %dº letra para A: ", i+1);
            scanf("%s", &A[i]);
    }
    for (i=0; i<TAM; i++)
    {
        printf("\nInforme a %dº letra para B: ", i+1);
            scanf("%s", &B[i]);
    }
    for (i=0; i<TAM; i++)
    {
       aux = A[i];
       A[i] = B[TAM-i-1];
       B[TAM-i-1]= aux;
    }
    for (i=0; i<TAM; i++)
    {
        printf("\nA = %s", A[i]);
        printf("\nB = %s", B[TAM-i-1]);
    }

}
