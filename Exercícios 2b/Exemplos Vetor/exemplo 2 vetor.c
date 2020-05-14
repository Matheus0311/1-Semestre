<<<<<<< HEAD
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
        printf("\nInforme o %dº número real para A: ", i+1);
            scanf("%g", &A[i]);
    }
    for (i=0; i<20; i++)
    {
        printf("\nInforme o %dº número real para B: ", i+1);
            scanf("%g", &B[i]);
    }
    for (i=0; i<10; i++)
    {
        C[i]=(A[i] - B[i]);
    }
    system("cls");
    for (i=0; i<10; i++)
        printf("\nA subtração de %g com %g é: %g", A[i], B[i], C[i]);
}
=======
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
        printf("\nInforme o %dÂº nÃºmero real para A: ", i+1);
            scanf("%g", &A[i]);
    }
    for (i=0; i<20; i++)
    {
        printf("\nInforme o %dÂº nÃºmero real para B: ", i+1);
            scanf("%g", &B[i]);
    }
    for (i=0; i<10; i++)
    {
        C[i]=(A[i] - B[i]);
    }
    system("cls");
    for (i=0; i<10; i++)
        printf("\nA subtraÃ§Ã£o de %g com %g Ã©: %g", A[i], B[i], C[i]);
}
>>>>>>> 6359c8a0393d044bf334d343f5263b068adba291
