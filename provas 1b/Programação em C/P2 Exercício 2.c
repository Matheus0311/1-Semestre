#include <stdio.h> //Biblioteca de tratamento de entrada/sa�da.
#include <stdlib.h> //Biblioteca de implementa��o de Fun��es para diversas opera��es.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localiza��o espec�fica, como moeda, data, etc.
int main()//In�cio da fun��o int main ().
{
    setlocale(LC_ALL, "Portuguese"); //LC_ALL Faz refer�ncia � todos os aspectos de localiza��o.
    int codigo;//Declara��o de vari�veis
    float preco_ini, preco_final;//Declara��o de vari�veis
    printf("C�digo do produto - 1001 == Desconto - 22%%\n");
    printf("C�digo do produto - 1254 == Desconto - 30%%\n");
    printf("C�digo do produto - 1548 == Desconto - 32%%\n");
    printf("C�digo do produto - 1687 == Desconto - 37%%\n");
    printf("C�digo do produto - 1923 == Desconto - 40%%\n\n");
    printf("\nInforme o c�digo do produto: ");//Entrada de valores
        scanf("%d", &codigo);//Leitura de valores
    printf("\nInforme o pre�o do produto: ");//Entrada de valores
    scanf("%f", &preco_ini);//Leitura de valores
    switch ( codigo )//fun��o caso
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
            printf("\nO produto n�o se encontra na lista j� disposta.\n\n");//como o produto n�o existe n�o ser� calculado nada.
            preco_ini=0;
            preco_final=0;
    }
    printf("\nEsse era o valor do produto: R$%.2f\n", preco_ini);//Sa�da de valores
    printf("\nEsse � o valor do produto com desconto: R$%.2f\n", preco_final);//Sa�da de valores
    printf("\nEssa � a diferen�a: R$%.2f\n", preco_ini - preco_final);//Sa�da de valores
    system("pause");
}

