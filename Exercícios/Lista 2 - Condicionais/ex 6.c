#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int ano;
    setlocale(LC_ALL, "Portuguese");//inclus�o da biblioteca locale.h, para acentua��o da l�ngua portuguesa.

    printf("Informe o ano: ");
        scanf("%d", &ano);

    if (ano%4==0)
        printf("\n� um ano bissexto!");
    else
        printf("\nN�o � um ano bissexto!");
}
