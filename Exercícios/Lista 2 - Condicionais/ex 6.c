#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int ano;
    setlocale(LC_ALL, "Portuguese");//inclusão da biblioteca locale.h, para acentuação da língua portuguesa.

    printf("Informe o ano: ");
        scanf("%d", &ano);

    if (ano%4==0)
        printf("\nÉ um ano bissexto!");
    else
        printf("\nNão é um ano bissexto!");
}
