#include <stdio.h> //Biblioteca de tratamento de entrada/saída.
#include <stdlib.h> //Biblioteca de implementação de Funções para diversas operações.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localização específica, como moeda, data, etc.
int main()//Início da função int main ().
{
    setlocale(LC_ALL, "Portuguese"); //LC_ALL Faz referência à todos os aspectos de localização.
    int codigo;//Declaração de variáveis
    float preco_ini, preco_final;//Declaração de variáveis
    printf("Código do produto - 1001 == Desconto - 22%%\n");
    printf("Código do produto - 1254 == Desconto - 30%%\n");
    printf("Código do produto - 1548 == Desconto - 32%%\n");
    printf("Código do produto - 1687 == Desconto - 37%%\n");
    printf("Código do produto - 1923 == Desconto - 40%%\n\n");
    printf("\nInforme o código do produto: ");//Entrada de valores
        scanf("%d", &codigo);//Leitura de valores
    printf("\nInforme o preço do produto: ");//Entrada de valores
    scanf("%f", &preco_ini);//Leitura de valores
    switch ( codigo )//função caso
    {
        case 1001:
            preco_final = (preco_ini - (preco_ini * 22) / 100);//desconto de 22%
            break;
        case 1254:
            preco_final = (preco_ini - (preco_ini * 30) / 100);//desconto de 30%
            break;
        case 1548:
            preco_final = (preco_ini - (preco_ini * 32) / 100);//desconto de 32%
            break;
        case 1687:
            preco_final = (preco_ini - (preco_ini * 37) / 100);//desconto de 37%
            break;
        case 1923:
            preco_final = (preco_ini - (preco_ini * 40) / 100);//desconto de 40%
            break;
        default:
            printf("\nO produto não se encontra na lista já disposta.\n\n");//como o produto não existe não será calculado nada.
            preco_ini=0;
            preco_final=0;
    }
    printf("\nEsse era o valor do produto: R$%.2f\n", preco_ini);//Saída de valores
    printf("\nEsse é o valor do produto com desconto: R$%.2f\n", preco_final);//Saída de valores
    printf("\nEssa é a diferença: R$%.2f\n", preco_ini - preco_final);//Saída de valores
    system("pause");
}

