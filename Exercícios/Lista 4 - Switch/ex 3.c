#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int codigo;
    float sal_ini, sal_final;
    setlocale(LC_ALL, "Portuguese");
    printf("Qual o código do seu cargo?\n");
    printf("\n101 - Gerente");
    printf("\n102 - Engenheiro");
    printf("\n103 - Técnico\n");
    printf("\nInforme o seu código: ");
        scanf("%d", &codigo);
    printf("\nInforme seu salário atual: ");
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
    printf("\nEsse era o seu antigo salário: R$%.2f", sal_ini);
    printf("\nEsse é o seu novo salário: R$%.2f", sal_final);
    printf("\nEssa é a diferença: R$%.2f", sal_final-sal_ini);
}
