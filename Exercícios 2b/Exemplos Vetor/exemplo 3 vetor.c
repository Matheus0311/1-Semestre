<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
    int A[15], B[15], C[30], i;
    setlocale(LC_ALL, "Portuguese");
    for (i=0; i<15; i++)
    {
        printf("\nInforme o %dº número inteiro para A: ", i+1);
            scanf("%d", &A[i]);
    }
    for (i=0; i<15; i++)
    {
        printf("\nInforme o %dº número inteiro para B: ", i+1);
            scanf("%d", &B[i]);
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
    for (i=0; i<30; i++)
    {
        printf("\nO %dº número para C é: %d", i+1, C[i]);
    }
}
=======
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
    int A[15], B[15], C[30], i;
    setlocale(LC_ALL, "Portuguese");
    for (i=0; i<15; i++)
    {
        printf("\nInforme o %dÂº nÃºmero inteiro para A: ", i+1);
            scanf("%d", &A[i]);
    }
    for (i=0; i<15; i++)
    {
        printf("\nInforme o %dÂº nÃºmero inteiro para B: ", i+1);
            scanf("%d", &B[i]);
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
    for (i=0; i<30; i++)
    {
        printf("\nO %dÂº nÃºmero para C Ã©: %d", i+1, C[i]);
    }
}
>>>>>>> 6359c8a0393d044bf334d343f5263b068adba291
