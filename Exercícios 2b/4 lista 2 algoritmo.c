#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 5
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float a[TAM], b[TAM], c[TAM];
    int i, j=1;
    for (i=0; i<TAM; i++)
    {
        printf("\nInforme o %dº número de A: ", i+1);
            scanf("%f", &a[i]);
    }
    for (i=TAM; i>0; i--)
    {
        printf("\nInforme o %dº número de B: ", j);
            scanf("%f", &b[i]);
            j++;
    }
        c[i] = a[i] * b[i];
    printf("%f", c[i]);

}
