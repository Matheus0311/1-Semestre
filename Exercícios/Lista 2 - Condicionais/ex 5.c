#include <stdio.h>
#include <locale.h>//biblioteca
#include <stdlib.h>
int main ()
{
    int n1;
    setlocale(LC_ALL, "Portuguese");//inclus�o da biblioteca locale.h, para acentua��o da l�ngua portuguesa.

    printf("Digite qualquer n�mero inteiro: ");
        scanf("%d", &n1);

    if (n1%3==0)
        printf("\n� divis�vel por 3!");
    else
        printf("\nN�o � divis�vel por 3!\n\n");

}
