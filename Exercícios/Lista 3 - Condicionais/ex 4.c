#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int codigo;
    float valor_ini, valor_final, porcento, dif;
    setlocale(LC_ALL, "Portuguese");
    printf("Qual o código do produto?\n");
    printf("\n1001");
    printf("\n1254");
    printf("\n1548");
    printf("\n1687");
    printf("\n1923\n");

    printf("\nInforme o código: ");
        scanf("%d", &codigo);
    printf("\nInforme o valor do produto R$ ");
        scanf("%f", &valor_ini);

    switch (codigo)
    {
    default:
            printf("\nCódigo inválido!\n");
            system("pause");
            return (0);
            break;
    case 1001:
        {
            valor_final = (valor_ini - (valor_ini * 22) / 100);
            porcento = 22;
            break;
    case 1254:
        {
            valor_final = (valor_ini - (valor_ini * 30) / 100);
            porcento = 30;
            break;
    case 1548:
        {
            valor_final = (valor_ini - (valor_ini * 32) / 100);
            porcento = 32;
            break;
    case 1687:
        {
            valor_final = (valor_ini - (valor_ini * 37) / 100);
            porcento = 37;
            break;
    case 1923:
        {
            valor_final = (valor_ini - (valor_ini * 40) / 100);
            porcento = 40;
            break;

    }
        }
            }
                }
                    }
                        }


    dif = valor_ini - valor_final;

    printf("\nEsse é o valor atual do produto com seu devido desconto: R$%.2f\n", valor_final);
    printf("\nO seu desconto foi de: R$%.2f\n",dif);
    printf("\nOu seja, %g%%\n", porcento);

system("pause");
return 0;}
