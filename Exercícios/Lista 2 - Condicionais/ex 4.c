#include <stdio.h>
#include <locale.h>//biblioteca
#include <stdlib.h>
void main ()
{
    int n1, n2;
    setlocale(LC_ALL, "Portuguese");//inclus�o da biblioteca locale.h, para acentua��o da l�ngua portuguesa.
    printf("\nDigite um n�mero: ");
    scanf("%d", &n1);
    printf("\nDigite outro n�mero: ");
    scanf("%d", &n2);

    if (n1==n2)
        printf("\nOs n�meros s�o iguais!\n");
    else
        printf("\nOs n�mero n�o s�o iguais!\n");
}
