#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float atual, mini, max, med;
    setlocale(LC_ALL, "Portuguese");
    system("color 04");

    printf("\n------------------------------------------\n");
    printf("\nInforme a quantidade atual do estoque: ");
        scanf("%f", &atual);
    printf("\nInforme a quantidade min�ma do estoque: ");
        scanf("%f", &mini);
    printf("\nInforme a quantidade m�xima do estoque: ");
        scanf("%f", &max);
    printf("\n------------------------------------------\n");

        med = (max + mini)/2;

    if (atual >= med)
    {
        printf("\nN�o efetuar compra\n!");
        printf("\n------------------------------------------\n");
    }

    else
    {
        printf("\nEfetuar compra!\n");
        printf("\n------------------------------------------\n");
    }
}
