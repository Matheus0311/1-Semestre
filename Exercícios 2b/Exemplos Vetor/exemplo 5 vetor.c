#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int A[15], B[15], i, j=1;
    for (i=0; i<15; i++)
    {
        printf("\nInforme o %dº número inteiro: ",j);
            scanf("%d", &A[i]);
        j++;
    }
    for (i=0; i<15; i++)
    {
        B[i]= (A[i]*2);
    }
    system("cls");
    j=1;
    for (i=0; i<15; i++)
    {
        printf("\nO dobro do %dº número é:  %d = %d x 2\n", j, B[i], A[i]);
        j++;
    }
}
