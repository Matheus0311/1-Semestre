#include <stdio.h>//Biblioteca de função
#include <stdlib.h>//Biblioteca de função
#include <locale.h>//Biblioteca para adicionar acentuação da língua portuguesa
int main()
{
    float litros, valor1, valorf;//declaração de variáveis
    setlocale(LC_ALL, "Portuguese");//comando para adicionar acentuação da língua portuguesa
    system("color 02");//função de mudança de cor do programa

    printf("\nValor da gasolina por litro");//tabela para estética do programa
    printf("\nR$ 4,30");
    printf("\n----------------------------------------------------------\n");//separação por tabela de linhas para estética do programa
    printf(" Quantidade de litros        |         Desconto por litro\n");
    printf(" Até 20 litros               |                   4%%        \n");
    printf(" Acima de 20 litros          |                   6%%        ");
    printf("\n----------------------------------------------------------\n");

    printf("\nInforme a quantidade de litros vendidos: ");//Entrada de dados
        scanf("%f", &litros);//leitura de dados
    printf("\n----------------------------------------------------------\n");

    if (litros <21)//condição
    {
       valor1 = (litros * 4.30);//cálculo
       valorf = (valor1 - (valor1*0.04));//cálculo
       printf("\nValor a pagar = %.2fR$\n", valorf);//saída de dados
       printf("\n----------------------------------------------------------\n");
    }
    else
    {
       valor1 = (litros * 4.30);//cálculo
       valorf = (valor1 - (valor1*0.06));//cálculo
       printf("\nValor a pagar = %.2fR$\n", valorf);//saída de dados
       printf("\n----------------------------------------------------------\n");
    }
}
