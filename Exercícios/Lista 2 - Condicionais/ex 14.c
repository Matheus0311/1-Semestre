#include <stdio.h>
#include <locale.h>//biblioteca
#include <stdlib.h>
int main()
{
    float H, preco_ph, sal_final;
    setlocale(LC_ALL, "Portuguese");//inclus�o da biblioteca locale.h, para acentua��o da l�ngua portuguesa.

    printf("Informe a quantidade de horas trabalhadas: ");
        scanf("%g", &H);
    printf("Informe o pre�o por hora de trabalho: ");
        scanf("%g", &preco_ph);

    sal_final  = preco_ph * H;

    if (H > 40)
         sal_final = sal_final + (sal_final/2);

        printf("\nEsse � o seu sal�rio final: R$%.2f\n\n", sal_final);
    system("pause");
return 0;}
