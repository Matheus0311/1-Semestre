#include <stdio.h>
#include <locale.h>//biblioteca
#include <stdlib.h>
int main ()
{
    float n1, n2, diferenca;
    setlocale(LC_ALL, "Portuguese");//inclus�o da biblioteca locale.h, para acentua��o da l�ngua portuguesa.

    printf("\nDigite um n�mero: ");
        scanf("%g", &n1);
    printf("\nDigite outro n�mero: ");
        scanf("%g", &n2);

    if (n1>n2)
        (diferenca = n1-n2);
    else
        (diferenca = n2-n1);

    printf("\nA diferen�a �: %g", diferenca);
}
