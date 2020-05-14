<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
    int A[8], B[8], i;
    setlocale(LC_ALL, "Portuguese");
    for (i=0; i<8; i++)
    {
        printf("\nInforme o %dº número inteiro: ", i+1);
            scanf("%d", &A[i]);
    }
    for (i=0; i<8; i++)
    {
        B[i]= (A[i]*3);
    }
    for (i=0; i<8; i++)
    {
        printf("\n%d Multiplicado por 3: %d\n", A[i], B[i]);
    }
}
=======
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
    int A[8], B[8], i;
    setlocale(LC_ALL, "Portuguese");
    for (i=0; i<8; i++)
    {
        printf("\nInforme o %dº número inteiro: ", i+1);
            scanf("%d", &A[i]);
    }
    for (i=0; i<8; i++)
    {
        B[i]= (A[i]*3);
    }
    for (i=0; i<8; i++)
    {
        printf("\n%d Multiplicado por 3: %d\n", A[i], B[i]);
    }
}
>>>>>>> 6359c8a0393d044bf334d343f5263b068adba291
