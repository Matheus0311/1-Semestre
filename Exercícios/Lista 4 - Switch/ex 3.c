#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int codigo;
    float sal_ini, sal_final;
    setlocale(LC_ALL, "Portuguese");
    printf("Qual o c�digo do seu cargo?\n");
    printf("\n101 - Gerente");
    printf("\n102 - Engenheiro");
    printf("\n103 - T�cnico\n");
    printf("\nInforme o seu c�digo: ");
        scanf("%d", &codigo);
    printf("\nInforme seu sal�rio atual: ");
        scanf("%f", &sal_ini);

    switch (codigo)
    {
        case 101:
            sal_final = (sal_ini + (sal_ini * 10) / 100);
            break;
        case 102:
            sal_final = (sal_ini + (sal_ini * 20) / 100);
            break;
        case 103:
            sal_final = (sal_ini + (sal_ini * 30) / 100);
            break;
        default:
            sal_final = (sal_ini + (sal_ini * 40) / 100);
    }
    printf("\nEsse era o seu antigo sal�rio: R$%.2f", sal_ini);
    printf("\nEsse � o seu novo sal�rio: R$%.2f", sal_final);
    printf("\nEssa � a diferen�a: R$%.2f", sal_final-sal_ini);
}
