#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int codigo;
    float preco_ini, preco_final, porcento;
    setlocale(LC_ALL, "Portuguese");
    printf("Qual o código do produto?\n");
    printf("\n1001");
    printf("\n1254");
    printf("\n1548");
    printf("\n1687");
    printf("\n1923\n");
    printf("\nInforme o código do produto: ");
        scanf("%d", &codigo);
    printf("\nInforme o preço do produto: ");
        scanf("%f", &preco_ini);

    switch (codigo)
    {
        case 1001:
            preco_final = (preco_ini - (preco_ini * 22) / 100);
            porcento = 22;
            break;
        case 1254:
            preco_final = (preco_ini - (preco_ini * 30) / 100);
            porcento = 30;
            break;
        case 1548:
            preco_final = (preco_ini - (preco_ini * 32) / 100);
            porcento = 32;
            break;
        case 1687:
            preco_final = (preco_ini - (preco_ini * 37) / 100);
            porcento = 37;
            break;
        case 1923:
            preco_final = (preco_ini - (preco_ini * 40) / 100);
            porcento = 40;
            break;
        default:
            preco_final = 0;
    }
    printf("\nEsse era o valor do produto: R$%.2f\n", preco_ini);
    printf("\nEsse é o valor do produto com desconto: R$%.2f\n", preco_final);
    printf("\nEssa é a diferença: R$%.2f\n", preco_ini - preco_final);
    printf("\nOu seja, um desconto de %g%%\n", porcento);

    system("pause");
    }
