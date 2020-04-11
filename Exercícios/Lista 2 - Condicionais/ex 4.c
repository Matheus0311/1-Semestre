#include <stdio.h>
#include <locale.h>//biblioteca
#include <stdlib.h>
void main ()
{
    int n1, n2;
    setlocale(LC_ALL, "Portuguese");//inclusão da biblioteca locale.h, para acentuação da língua portuguesa.
    printf("\nDigite um número: ");
    scanf("%d", &n1);
    printf("\nDigite outro número: ");
    scanf("%d", &n2);

    if (n1==n2)
        printf("\nOs números são iguais!\n");
    else
        printf("\nOs número não são iguais!\n");
}
