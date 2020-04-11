#include <stdio.h>
#include <locale.h>//biblioteca

void main ()
{
    int numero, resto;
    setlocale(LC_ALL, "Portuguese");//inclusão da biblioteca locale.h, para acentuação da língua portuguesa.
    printf("\nInforme um número: ");
        scanf("%d", &numero);

    resto = numero%2;

    if (resto == 0)
        printf("\nNúmero par");
    else
        printf("\nNúmero ímpar");
}

