#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 5
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float vet[TAM], soma;
    int i;
    printf("Informe 100 valores: \n");
    for (i=0; i<TAM; i++)
    {
        printf("Informe o %dº valor: ", i+1);
            scanf("%f", &vet[i]);
    }
    for (i=0; i<TAM; i++)
    {
        soma=soma+vet[i];
    }
    printf("\nSoma = %.2f\n\n\n", soma);
}
