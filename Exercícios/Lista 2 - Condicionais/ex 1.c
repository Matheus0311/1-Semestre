#include <stdio.h>
#include <locale.h>//biblioteca

void main ()
{
    int numero, resto;
    setlocale(LC_ALL, "Portuguese");//inclus�o da biblioteca locale.h, para acentua��o da l�ngua portuguesa.
    printf("\nInforme um n�mero: ");
        scanf("%d", &numero);

    resto = numero%2;

    if (resto == 0)
        printf("\nN�mero par");
    else
        printf("\nN�mero �mpar");
}

