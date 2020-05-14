#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int vet[5];
    int i;
    for(i=0; i<5; i++)
    {
        printf("informe um numero: ");
            scanf("%d", &vet[i]);
    }
    printf("Valores originais: \n");
    for (i=0; i<5; i++)
    {
        printf("%d\n", vet[i]);
    }
    printf("Valores na ordem inversa: \n");
    for (i=4; i>=0; i--)
    {
        printf("%d \n", vet[i]);
    }
}
