#include <stdio.h>
#include <locale.h>//biblioteca
void main ()

{
    int idade;
    setlocale(LC_ALL, "Portuguese");//inclusão da biblioteca locale.h, para acentuação da língua portuguesa.
    printf("\nInforme a idade: ");
    scanf("%d", &idade);

    if (idade>18)
    printf("\nA pessoa é maior de idade\n");
    else
    printf("\nA pessoa é menor de idade\n");
    }

