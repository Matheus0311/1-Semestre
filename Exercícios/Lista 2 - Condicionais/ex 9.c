#include <stdio.h>
#include <locale.h>//biblioteca
#include <stdlib.h>
int main ()
{
    int n1, n2;
    setlocale(LC_ALL, "Portuguese");//inclus�o da biblioteca locale.h, para acentua��o da l�ngua portuguesa.

    printf("Digite um n�mero inteiro: ");
        scanf("%d", &n1);
    printf("\nDigite outro n�mero inteiro: ");
        scanf("%d", &n2);


    if (n1==n2)
        printf("\nS�o iguais!\n\n\n");

    else if (n1>n2)
        printf("\n\nS�o diferentes, %d � o maior!\n\n", n1);

    else if (n2>n1)
        printf("\n\nS�o diferentes, %d � o maior!\n\n", n2);

}
