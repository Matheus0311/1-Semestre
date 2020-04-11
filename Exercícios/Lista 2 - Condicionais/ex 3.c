#include <stdio.h>
#include <locale.h>//biblioteca
#include <stdlib.h>
int main ()
{
    float n1, n2, diferenca;
    setlocale(LC_ALL, "Portuguese");//inclusão da biblioteca locale.h, para acentuação da língua portuguesa.

    printf("\nDigite um número: ");
        scanf("%g", &n1);
    printf("\nDigite outro número: ");
        scanf("%g", &n2);

    if (n1>n2)
        (diferenca = n1-n2);
    else
        (diferenca = n2-n1);

    printf("\nA diferença é: %g", diferenca);
}
