#include <stdio.h>//biblioteca
#include <locale.h>//biblioteca
int main ()
{
    float sal_fix, valor_vendas, sal_final;
    setlocale(LC_ALL, "Portuguese");//inclus�o da biblioteca locale.h, para acentua��o da l�ngua portuguesa.
    printf("\nPrograma que l� o sal�rio fixo do funcion�rio e o valor total de suas vendas, calcula e mostra o sal�rio final do vendedor.\n");

    printf("\nInforme o sal�rio fixo: ");
        scanf("%f", &sal_fix);//leitura do sal�rio fixo

    printf("\nInforme o valor total das suas vendas: ");
        scanf("%f", &valor_vendas);//leitura do valor das vendas

        sal_final = sal_fix + ((valor_vendas*5)/100);//c�lculo

    printf("\nEsse � o seu sal�rio final: %.2f R$", sal_final);//resultado

}
