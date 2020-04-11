#include <stdio.h>//biblioteca
#include <locale.h>//biblioteca
int main ()
{
    float sal_ini, sal_7, sal_6, sal_5;
    setlocale(LC_ALL, "Portuguese");//inclusão da biblioteca locale.h, paera acentuação da língua portuguesa.

    printf("\nPrograma que calcula o reajuste salarial pelos próximos 3 anos.\n");
    printf("\nInforme seu salário inicial: ");
    scanf("%f", &sal_ini);//leitura do salário inicial

    sal_7 = sal_ini + (sal_ini*7)/100;//cálculo
    sal_6 = sal_7 + (sal_7*6)/100;//cálculo
    sal_5 = sal_6 + (sal_6*5)/100;//cálculo

    printf("\nSeu salário no próximo 1 ano irá ser de: %.2f R$\n", sal_7);//resultado
    printf("\nSeu salário no segundo ano será de: %.2f R$\n", sal_6);//resultado
    printf("\nSeu salário no terceiro ano será de: %.2f R$\n", sal_5);//resultado
}
