#include <stdio.h>//biblioteca
#include <locale.h>//biblioteca
int main ()
{
    float sal_ini, sal_7, sal_6, sal_5;
    setlocale(LC_ALL, "Portuguese");//inclus�o da biblioteca locale.h, paera acentua��o da l�ngua portuguesa.

    printf("\nPrograma que calcula o reajuste salarial pelos pr�ximos 3 anos.\n");
    printf("\nInforme seu sal�rio inicial: ");
    scanf("%f", &sal_ini);//leitura do sal�rio inicial

    sal_7 = sal_ini + (sal_ini*7)/100;//c�lculo
    sal_6 = sal_7 + (sal_7*6)/100;//c�lculo
    sal_5 = sal_6 + (sal_6*5)/100;//c�lculo

    printf("\nSeu sal�rio no pr�ximo 1 ano ir� ser de: %.2f R$\n", sal_7);//resultado
    printf("\nSeu sal�rio no segundo ano ser� de: %.2f R$\n", sal_6);//resultado
    printf("\nSeu sal�rio no terceiro ano ser� de: %.2f R$\n", sal_5);//resultado
}
