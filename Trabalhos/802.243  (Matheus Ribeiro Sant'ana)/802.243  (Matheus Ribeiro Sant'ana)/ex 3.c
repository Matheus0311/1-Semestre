#include <stdio.h>//Biblioteca de fun��o
#include <stdlib.h>//Biblioteca de fun��o
#include <locale.h>//Biblioteca para adicionar acentua��o da l�ngua portuguesa
int main()
{
    float litros, valor1, valorf;//declara��o de vari�veis
    setlocale(LC_ALL, "Portuguese");//comando para adicionar acentua��o da l�ngua portuguesa
    system("color 02");//fun��o de mudan�a de cor do programa

    printf("\nValor da gasolina por litro");//tabela para est�tica do programa
    printf("\nR$ 4,30");
    printf("\n----------------------------------------------------------\n");//separa��o por tabela de linhas para est�tica do programa
    printf(" Quantidade de litros        |         Desconto por litro\n");
    printf(" At� 20 litros               |                   4%%        \n");
    printf(" Acima de 20 litros          |                   6%%        ");
    printf("\n----------------------------------------------------------\n");

    printf("\nInforme a quantidade de litros vendidos: ");//Entrada de dados
        scanf("%f", &litros);//leitura de dados
    printf("\n----------------------------------------------------------\n");

    if (litros <21)//condi��o
    {
       valor1 = (litros * 4.30);//c�lculo
       valorf = (valor1 - (valor1*0.04));//c�lculo
       printf("\nValor a pagar = %.2fR$\n", valorf);//sa�da de dados
       printf("\n----------------------------------------------------------\n");
    }
    else
    {
       valor1 = (litros * 4.30);//c�lculo
       valorf = (valor1 - (valor1*0.06));//c�lculo
       printf("\nValor a pagar = %.2fR$\n", valorf);//sa�da de dados
       printf("\n----------------------------------------------------------\n");
    }
}
