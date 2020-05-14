<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int A[15], B[15], i, j=1;
    for (i=0; i<15; i++)
    {
        printf("\nInforme o %dº número inteiro: ",i+1);
            scanf("%d", &A[i]);
    }
    for (i=0; i<15; i++)
    {
        B[i]= (A[i]*2);
    }
    system("cls");
    for (i=0; i<15; i++)
    {
        printf("\nO dobro do %dº número é:  %d = %d x 2\n", i+1, B[i], A[i]);
        j++;
    }
}
=======
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int A[15], B[15], i, j=1;
    for (i=0; i<15; i++)
    {
        printf("\nInforme o %dÂº nÃºmero inteiro: ",i+1);
            scanf("%d", &A[i]);
    }
    for (i=0; i<15; i++)
    {
        B[i]= (A[i]*2);
    }
    system("cls");
    for (i=0; i<15; i++)
    {
        printf("\nO dobro do %dÂº nÃºmero Ã©:  %d = %d x 2\n", i+1, B[i], A[i]);
        j++;
    }
}
>>>>>>> 6359c8a0393d044bf334d343f5263b068adba291
