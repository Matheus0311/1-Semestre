#include <stdio.h>
#include <locale.h>//biblioteca
void main ()

{
    int idade;
    setlocale(LC_ALL, "Portuguese");//inclus�o da biblioteca locale.h, para acentua��o da l�ngua portuguesa.
    printf("\nInforme a idade: ");
    scanf("%d", &idade);

    if (idade>18)
    printf("\nA pessoa � maior de idade\n");
    else
    printf("\nA pessoa � menor de idade\n");
    }

