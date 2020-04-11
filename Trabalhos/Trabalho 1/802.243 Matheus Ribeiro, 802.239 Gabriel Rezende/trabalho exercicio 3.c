#include <stdio.h>//biblioteca
#include <locale.h>//biblioteca
int main ()
{
    float sal_fix, valor_vendas, sal_final;
    setlocale(LC_ALL, "Portuguese");//inclusão da biblioteca locale.h, para acentuação da língua portuguesa.
    printf("\nPrograma que lê o salário fixo do funcionário e o valor total de suas vendas, calcula e mostra o salário final do vendedor.\n");

    printf("\nInforme o salário fixo: ");
        scanf("%f", &sal_fix);//leitura do salário fixo

    printf("\nInforme o valor total das suas vendas: ");
        scanf("%f", &valor_vendas);//leitura do valor das vendas

        sal_final = sal_fix + ((valor_vendas*5)/100);//cálculo

    printf("\nEsse é o seu salário final: %.2f R$", sal_final);//resultado

}
