#include<stdlib.h>
#include<stdio.h>
#include <locale.h>
#define TAM 10
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int numero [TAM];
    int i, j, aux;
    for (i=0; i<TAM; i++)
    {
        printf("Informe o %dº número: ", i+1);
            scanf("%d", &numero[i]);
    }
    for (i=0; i<TAM; i++)
    {
        for (j=i+1; j<TAM; j++)
        {
            if (numero [i]>numero[j])
            {
                aux=numero[i];
                numero[i]=numero[j];
                numero[j]=aux;
            }
        }
    }
    printf("\nOrdem Crescente: ");
    for (i=0; i<TAM; i++)
    {
        printf("%d ", numero[i]);
    }
}
